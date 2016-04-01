#include<stdio.h>
int main(void)
{
  int number,sign;
  printf("Enter the number: ");
  scanf("%d",&number);
  if(number<0)
    sign=-1;
  else if(number==0)
      sign=0;
  else
      sign=1;
  printf("Sign = %d",sign);
  return 0;    
}
