#include<stdio.h>
int main(void)
{
  int arr[10]={0,1,4,9,16};
  int i;
  for(i=5;i<10;i++)
    arr[i]=i*i;
  for(i=0;i<10;i++)
     printf("Array Value %i = %i \n",i,arr[i]);
  return 0;
}
