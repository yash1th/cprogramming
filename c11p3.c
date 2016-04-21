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


  n1.value=100;
  n1.next=&n2;

  n2.value=200;
  n2.next=&n3;

  n3.value=300;
  n3.next=&n1;

  struct entry newnode;
  newnode.value=250;

  struct entry *listPtr;
  listPtr=&newnode;

  insertEntry(&newnode,&n1);

  if(newnode.next==&n1)
  {
    do
      {
        printf("%i ",listPtr->value);
        listPtr=listPtr->next;
      }while(listPtr!=&newnode);
  }
  else
  {
    listPtr=&n1;
    do
      {
        printf("%i ",listPtr->value);
        listPtr=listPtr->next;
      }while(listPtr!=&n1);
  }



  printf("\n");

  return 0;
}
void insertEntry(struct entry *newPtr,struct entry *afterPtr)
{
  newPtr->next=afterPtr->next;
  afterPtr->next=newPtr;
}
//not sure i did right, but i got it
