#include<stdio.h>
int main(void)
{
  int trinum=0;
  for(int i=5;i<=50;i=i+5)
    {
      trinum=i*(i+1)/2;
      printf("Triangular number %d = %d \n",i,trinum);
    }
    return 0;

}
