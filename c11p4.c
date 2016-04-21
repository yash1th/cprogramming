#include<stdio.h>
struct entry
{
  int value;
  struct entry *next;
};
struct entry *listPtr;
void removeEntry(struct entry *ptr);
int main(void)
{
  struct entry n1,n2,n3;

  n1.value=100;
  n1.next=&n2;

  n2.value=200;
  n2.next=&n3;

  n3.value=300;
  n3.next=&n1;

  removeEntry(&n2);
  listPtr=&n1;
  
  printf("\n");
  return 0;

}
void removeEntry(struct entry *ptr)
{
  if(ptr==listPtr)
    {
    ptr->next=(ptr->next)->next;
    listPtr=ptr->next;
    }
  else
    {
      ptr->next=(ptr->next)->next;
    }
}
//not sure about this too
