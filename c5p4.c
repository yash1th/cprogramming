#include<stdio.h>
int main(void)
{
    long long int factorial=1;
    int total;
    printf("Enter the maximum number of factorials = ");
    scanf("%d",&total);
    printf("number          factorial \n");
    for(int i=1;i<=total;i++)
    {
      for(int j=1;j<=i;j++)
        {
          factorial=factorial*j;
        }
        printf("%2i             %7lli\n",i,factorial);
        factorial=1;
    }
    return 0;
}
