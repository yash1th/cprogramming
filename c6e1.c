#include<stdio.h>
int main(void)
{
  int num;
  printf("Enter the given number = ");
  scanf("%d",&num);
  int temp=num;
  if(num<0)
    num = -num;
  printf("Absolute value of %d is %d \n",temp,num);
  return 0;  
}
