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
void sort(int *a,int n)
{
  int temp=0;
  int *b=a;
  int *c=a;
  for(;c<a+n-1;c+=1)
    {
      for(b=c+1;b<a+n;b+=1)
        {
          if(*c>*b)
          {
            temp=*c;
            *c=*b;
            *b=temp;
          }
        }
    }
}
