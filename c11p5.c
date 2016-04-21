#include<stdio.h>
struct entry
{
  int value;
  struct entry *previous;
  struct entry *next;
};
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

  struct entry *listPtr=&n1;

  while(listPtr!=(struct entry *)0)
  {
    printf("%d ",listPtr->value);
    listPtr=listPtr->next;
  }
  printf("\n");
  return 0;
}
