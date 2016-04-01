#include<stdio.h>
int main(void)
{
  int a,digit;
  printf("Enter an integer : \n");
  scanf("%d",&a);
  int temp=a;
  if(temp>0)
  {
    printf("The reversed number is ");
    while(temp!=0)
    {
      digit=temp%10;
      printf("%d",digit);
      temp=temp/10;
    }
    printf("\n");
  }
  else if(temp<0)
  {
    temp=-temp;
    printf("The reversed number is ");
    while(temp!=0)
      {
        digit=temp%10;
        printf("%d",digit);
        temp=temp/10;
      }
    printf("-");
    printf("\n");
  }
  else
    printf("The reversed number is 0 \n");
  return 0;
}
