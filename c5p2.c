#include<stdio.h>
int main(void)
{
  printf("Tabular values of n and n^2 \n");
  printf(" n           n2\n");
  for(int i=1;i<=10;i++)
  {
  printf("%2i         %3i\n",i,i*i);
  }
  return 0;
}
