#include<stdio.h>
int arraySum(int[],int);
int main(void)
{
  int n;
  printf("enter number of elements in the array : ");
  scanf("%d",&n);
  int sample[n];
  for(int i=0;i<n;i++)
  {
    printf("enter element %d : ",(i+1));
    scanf("%d",&sample[i]);
  }
  int sum=arraySum(sample,n);
  printf("sum of the elements = %i\n",sum);
  return 0;
}
int arraySum(int a[],int number)
{
  int result=0;
  for(int i=0;i<number;i++)
    result+=a[i];
  return result;
}
