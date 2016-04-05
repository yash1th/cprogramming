#include<stdio.h>
int minimum(int[]);
int main(void)
{
  int scores[10],minScore;
  printf("Enter 10 scores : \n");
  for(int i=0;i<10;i++)
    scanf("%i",&scores[i]);
  minScore=minimum(scores);
  printf("The minimum score is %d\n",minScore);
  return 0;
}
int minimum(int values[])
{
  int minValue,i;
  minValue=values[0];

  for(i=1;i<10;i++)
    {
      if(values[i]<minValue)
        minValue=values[i];
    }
  return minValue;
}
