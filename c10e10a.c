//binary search
#include<stdio.h>
#include<stdbool.h>
bool binarySearch(int[],int,int);
int main()
{
  int n,num;
  printf("enter number of elements : ");
  scanf("%d",&n);
  int numbers[n];
  printf("enter %i numbers in ascending order : ",n);
  for(int i=0;i<n;i++)
    scanf("%d",&numbers[i]);
  printf("enter the number you want to find : ");
  scanf("%d",&num);
  if(binarySearch(numbers,num,n))
    printf("it's there in the list\n");
  else
    printf("sorry bud, its not there \n");
  return 0;
}
bool binarySearch(int a[],int x,int size)
{
  int low=0,high=size-1;
  int mid=(low+high)/2;
  while(low<=high)
    {
      if(a[mid]<x)
        low=mid+1;
      else if(a[mid]==x)
        break;
      else
        high=mid-1;
      mid=(low+high)/2;
    }
  if(low>high)
    return false;
  return true;
}
