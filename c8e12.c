#include<stdio.h>
void sort(int[],int);
int main(void)
{
  int n;
  printf("enter the number of elements : ");
  scanf("%d",&n);
  int numberArray[n];
  printf("enter %d numbers :\n",n);
  for(int i=0;i<n;i++)
    scanf("%d",&numberArray[i]);
  sort(numberArray,n);
  printf("sorted list of numbers are :\n");
  for(int i=0;i<n;i++)
    printf("%d\n",numberArray[i]);
  return 0;
}
void sort(int a[],int n)
{
  int i,j,temp;
  for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
        {
          if(a[i]>a[j])
          {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
          }
        }
    }
}
