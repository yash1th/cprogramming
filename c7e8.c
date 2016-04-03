#include<stdio.h>
int main(void)
{
  int numFibs,i;
  char again;
  do
  {
  printf("How many fibonacci numbers do you want to generate : ");
  scanf("%d",&numFibs);
  while(numFibs<1 || numFibs>79)
  {
    printf("Wrong input bruh !! \n");
    printf("Enter a value in between 1 and 79 : ");
    scanf("%d",&numFibs);
  }
  unsigned long long int fib[numFibs];
  fib[0]=0;
  fib[1]=1;
  for(int i=2;i<numFibs;i++)
  {
    fib[i]=fib[i-1]+fib[i-2];
  }
  for(i=0;i<numFibs;i++)
  {
    printf("%llu  ",fib[i]);
  }
  printf("\n");
  printf("Do you want to do it again (y/n) : ");
  scanf(" %c",&again);
  while(again!='y' && again!='n')
  {
    printf("Invalid input bruh \n");
    printf("Do you want to do it again (y/n) : ");
    scanf(" %c",&again);
  }
}while(again=='y');
printf("Peace out Bruh !!\n");
return 0;
}
