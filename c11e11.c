#include<stdio.h>
int arraySum(int array[],const int n);
int main()
{
  int a[]={1,2,3,4,5,6,7,8,9,10};
  printf("array sum is : %d\n",arraySum(a,10));
  return 0;
}
int arraySum(int array[],const int n)//int *array;
{
  int *startPtr,sum=0;
  int * const endPtr=array+n;
  for(startPtr=array;startPtr<endPtr;startPtr+=1)
  {
      sum+=*startPtr;
  }
  return sum;
}
