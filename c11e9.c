//More on pointers and functions

#include<stdio.h>
void exchange(int * const ptr1,int * const ptr2);
int main(void)
{
  int i1=-5,i2=66,*p1=&i1,*p2=&i2;

  printf("i1 = %d, i2 = %d\n",i1,i2);
  exchange(p1,p2);
  printf("i1 = %d, i2 = %d\n",i1,i2);
  exchange(&i1,&i2);
  printf("i1 = %d, i2 = %d\n",i1,i2);
  return 0;
}
void exchange(int * const ptr1,int * const ptr2)
{
  int temp;
  temp=*ptr1;
  *ptr1=*ptr2;
  *ptr2=temp;
}
//if we observed if we want to exchange two values and send them back
//to the main function, we need to use pointers. since a function cannot
//return more than one thing
