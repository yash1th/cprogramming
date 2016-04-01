#include<stdio.h>
int main(void)
{
    int digit,number;
    printf("Enter the given number: ");
    scanf("%d",&number);
    int temp=number;
    int temp2=0;
    while(temp!=0)
    {
      digit=temp%10;
      temp2=digit+temp2;
      temp=temp/10;
    }
    printf("%d",temp2);
    return 0;
}
