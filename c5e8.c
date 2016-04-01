#include<stdio.h>
int main(void)
{
    int number,digit;
    printf("Enter the number to be reversed = \n");
    scanf("%d",&number);
    int temp=number;
    while(temp!=0)
      {
          digit=temp%10;
          printf("%d",digit);
          temp=temp/10;
      }
      printf("\n");
      return 0;
}
