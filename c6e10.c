#include<stdio.h>
int main(void)
{
  int number,i,j;
  _Bool prime;
  printf("Enter the max number that you want to find primes upto: ");
  scanf("%d",&number);
  for(i=2;i<=number;i++)
    {
      prime=1;
      for(j=2;j<i;j++)
        {
          if(i%j==0)
              prime=0;
        }
      if(prime!=0)
          printf("%d \n",i);
    }
    printf("\n");
    return 0;
}
