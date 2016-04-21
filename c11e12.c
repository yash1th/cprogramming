#include<stdio.h>
int arraySum(int array[],const int n);
int main()
{
  int a[]={1,2,3,4,5,6,7,8,9,10};
  printf("array sum is : %d\n",arraySum(a,10));
  return 0;
}
int arraySum(int *array,const int n)//int *array;
{
  int sum=0;
  int * const endPtr=array+n;
  //if there is no value to be initialized in a for loop
  //then there would be no initialization expression
  for(;array<endPtr;array+=1)
  {
      sum+=*array;
  }
  return sum;
}
