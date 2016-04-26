#include<stdio.h>
int process(int,int,int);
int main(void)
{
  int i,j,k,nread;
  nread=scanf("%d%d%d",&i,&j,&k);

  #ifdef DEBUG
    fprintf(stderr,"number of integers read = %i\n",nread);
    fprintf(stderr,"i=%i,j=%i,k=%i\n",i,j,k);
  #endif

  printf("%i\n",process(i,j,k));
  return 0;
}
int process(int a,int b,int c)
{
  return a+b+c;
}
