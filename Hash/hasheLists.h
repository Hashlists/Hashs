/*RASOLOARISON Tina
 * BELMILOUD Samira */
#ifndef H_HASHELISTS_H
#define H_HASHELISTS_H

#include <stdio.h>
#include <stdlib.h> 


#define bits	3
#define offsetof(TYPE, MEMBER)	( (size_t) &((TYPE *)0)->MEMBER )
#define container_of(ptr, type, member) ({		\
const typeof( ((type *)0)->member ) *__mptr = (ptr);	\
(type *)( (char *)__mptr - offsetof(type, member) );})

#define list_for_each_entry(cur, head, member)\
for(cur=container_of((head)->next, typeof(*cur), member); \
&cur->memeber!=(head);\
cur=container_of(cur->member.next,typeof(*cur), member))

struct list_head {
	struct list_head *prev;
	struct list_head *next;
	
};

struct hashTable {
	unsigned int *id;
	struct list_head *list_hach[5];
};

void INIT_LIST_HEAD (struct list_head *head);
void list_add (struct list_head *node, struct list_head *head);
void list_del (struct list_head *node, struct list_head *head);

void INIT_hashTable(struct hashTable *hash);
void hashTable_add(struct hashTable *tab, struct list_head *struc, unsigned int id);
void hashTable_del(struct hashTable *tab, struct list_head *struc, unsigned int id);
struct hashTable search_objet(unsigned int id);
#endif
