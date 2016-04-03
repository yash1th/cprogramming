#include<stdio.h>
int main(void)
{
  float numbers[10],sum=0,average;
  for(int i=0;i<10;i++)
    numbers[i]=0;
  for(int i=0;i<10;i++)
    {
      printf("Enter value %d : ",i+1);
      scanf("%f",&numbers[i]);
      sum=sum+numbers[i];
    }
  average=sum/10;
  printf("Sum = %.3f \n",sum);
  printf("Average = %f \n",average);
  return 0;
}
