
/*RASOLOARISON Tina
 * BELMILOUD Samira */

#include "hasheLists.h"

struct test {
   unsigned int *id;
   struct list_head *testPrg;
};

int main(){

struct test* listTest[4];
struct hashTable * testTable = NULL;
struct test* head;
unsigned int i;

   head = (struct test *)malloc(sizeof(struct test));
   INIT_hashTable(testTable);
   for( i = 0; i < 4; i++) {
     listTest[i] = (struct test*) malloc(sizeof(struct test));
     hashTable_add(testTable, (listTest[i]->testPrg), i);
   }

   for(i = 0; i < 2; i++) {
     hashTable_del(testTable, (listTest[i]->testPrg), i);
   }
	printf("le test est passe \n");
  return 0;
}



