#include<stdio.h>
struct entry
{
  int value;
  struct entry *previous;
  struct entry *next;
};
void removeEntry(struct entry *node);
struct entry *listPtr;
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


  removeEntry(&n1);

  do
  {
    printf("%d ",listPtr->value);
    listPtr=listPtr->next;
  }while(listPtr!=(struct entry *)0);
  printf("\n");
  return 0;
}
void removeEntry(struct entry *node)
{
  listPtr=node;
  if(node->previous == 0)
  {
      (node->next)->previous=0;
      listPtr=node->next;
  }
  else if(node->next ==0)
  {
      (node->previous)->next=0;
  }
  else
  {
    (node->previous)->next=node->next;
    (node->next)->previous=node->next;
  }
}
//i declared listptr as global, because since i don't know what entry
//i am going to remove, i just made a copy of the parameter and
//updated it if it's the first node of the list
