#include<stdio.h>
struct entry
{
  int value;
  struct entry *next;
};
void insertEntry(struct entry *newPtr,struct entry *afterPtr);
int main(void)
{
  struct entry n1,n2,n3;

  struct entry *startPtr=&n1;

  n1.value=100;
  n1.next=&n2;

  n2.value=200;
  n2.next=&n3;

  n3.value=300;
  n3.next=(struct entry *)0;

  struct entry n2_3;
  n2_3.value=250;

  insertEntry(&n2_3,&n2);

  struct entry *listPtr;
  listPtr=startPtr;

  while(listPtr!=(struct entry *)0)
    {
      printf("%i ",listPtr->value);
      listPtr=listPtr->next;
    }
  printf("\n");

  return 0;
}
void insertEntry(struct entry *newPtr,struct entry *afterPtr)
{
  newPtr->next=afterPtr->next;
  afterPtr->next=newPtr;
}
