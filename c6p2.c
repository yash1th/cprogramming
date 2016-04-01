#include<stdio.h>
int main(void)
{
  int a,b;
  printf("Enter the two numbers : ");
  scanf("%d %d",&a,&b);
  if(b==0)
    printf("Division is not possible \n");
  else
      {
        if(a%b==0)
            printf("Yes %d is divisible by %d \n",a,b);
        else
            printf("Nope %d is not divisible by %d \n",a,b);
      }
  return 0;
}
