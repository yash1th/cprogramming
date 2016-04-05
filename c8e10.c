#include<stdio.h>
int minimum(int[],int);
int main(void)
{
  int minScore,number;
  printf("enter the number of elements : ");
  scanf("%d",&number);
  int scores[number];
  printf("Enter %d numbers : \n",number);
  for(int i=0;i<number;i++)
    scanf("%i",&scores[i]);
  minScore=minimum(scores,number);
  printf("The minimum score is %d\n",minScore);
  return 0;
}
int minimum(int values[],int numberOfElements)
{
  int minValue,i;
  minValue=values[0];

  for(i=1;i<numberOfElements;i++)
    {
      if(values[i]<minValue)
        minValue=values[i];
    }
  return minValue;
}
