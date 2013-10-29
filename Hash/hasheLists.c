
/*RASOLOARISON Tina
 * BELMILOUD Samira **/

#include "hasheLists.h"

void INIT_LIST_HEAD (struct list_head *head){

	head=malloc(sizeof(struct list_head));
	if(head!=NULL){
		head->next=head;
		head->prev=head;		
	}	
	else printf("le pointeur est nul");
}

void list_add (struct list_head *node, struct list_head *head){
	
	struct list_head *queue=head->prev;
	queue->next=node;
	node->prev=queue;
	node->next=head;
	head->prev=node;	
}
void list_del(struct list_head *node, struct list_head * head){
	if(node!=head){
		struct list_head *prec=node->prev;
		struct list_head *suiv=node->next;
		prec->next=suiv;
		suiv->prev=prec;
	}
	else printf("impossible de supprimer la tete de la liste\n");
}

void INIT_hashTable(struct hashTable *hash){
	int i;
	hash = (struct hashTable *) malloc(sizeof(struct hashTable));	
	for(i=0; i < 5; i++) {
    	INIT_LIST_HEAD(hash->list_hach[i]);
  	}
}

void hashTable_add(struct hashTable *table, struct list_head *struc, unsigned int id){	
	unsigned int s = id * 0x9e370001UL;
	s >> (32 - bits);
	list_add(struc, table->list_hach[s]);
}

void hashTable_del(struct hashTable *table, struct list_head *struc, unsigned int id){
	unsigned int s = id * 0x9e370001UL ;
  	s >> (32 - bits);
	list_del(struc, table->list_hach[s]);
}
