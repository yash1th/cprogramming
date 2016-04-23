#include<stdio.h>
#define YES 1
#define NO 0
int isEven(int);
int main(void)
{
  if(isEven(20)==YES)
    printf("yes\n");
  if(isEven(21)==NO)
      printf("no\n");
  return 0;
}
int isEven(int n)
{
  if(n%2==0)
    return YES;
  else
    return NO;
}
