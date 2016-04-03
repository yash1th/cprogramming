#include<stdio.h>
int main(void)
{
  int i,j,maxLimit;
  printf("Enter the max limit upto which you want to find : ");
  scanf("%d",&maxLimit);
  int p[maxLimit];
  for(i=0;i<maxLimit-1;i++)
    p[i]=0;
  for(i=2;i<maxLimit;i++)
  {
    for(j=2;i*j<maxLimit;j++)
      p[i*j]=1;
  }
  for(i=2;i<maxLimit;i++)
  {
    if(p[i]==0)
      printf("%d ",i);
  }
  printf("\n");
  return 0;
}
