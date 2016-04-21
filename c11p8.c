#include<stdio.h>
void sort3(int *p,int *q,int *r);
void swap(int *num1,int *num2);
int main(void)
{
  int a,b,c;
  printf("Enter the three numbers : \n");
  scanf("%d%d%d",&a,&b,&c);
  sort3(&a,&b,&c);

  printf("The numbers in ascending order are : \n");
  printf("%d %d %d\n",a,b,c);
  return 0;
}
void sort3(int *a,int *b,int *c)
{
  if(*a>*b)
    swap(a,b);
  if(*a>*c)
    swap(a,c);
  if(*b>*c)
    swap(b,c);

}
void swap(int *num1,int *num2)
{
  int temp=0;
  temp=*num1;
  *num1=*num2;
  *num2=temp;
}
