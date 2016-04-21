#include<stdio.h>
struct entry
{
  int value;
  struct entry *previous;
  struct entry *next;
};
void insertEntry(struct entry *new,struct entry *after);
int main(void)
{
  struct entry n1,n2,n3;

  n1.previous=0;
  n1.value=100;
  n1.next=&n2;

  n2.previous=&n1;
  n2.value=200;
  n2.next=&n3;

  n3.previous=&n2;
  n3.value=300;
  n3.next=0;

  struct entry n4;
  n4.value=250;

  insertEntry(&n4,&n1);
  struct entry *listPtr=&n1;

  while(listPtr!=(struct entry *)0)
  {
    printf("%d ",listPtr->value);
    listPtr=listPtr->next;
  }
  printf("\n");
  return 0;
}
void insertEntry(struct entry *new,struct entry *after)
{

  new->next=after->next;
  after->next=new;
  new->previous=after;
}
