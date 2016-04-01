#include<stdio.h>
int main(void)
{
  int numofgrades,gradetotal,average,grade;
  printf("Enter the number of subjects : ");
  scanf("%d",&numofgrades);
  gradetotal=0;
  int numoffails=0;
  for(int i=1;i<=numofgrades;i++)
    {
      printf("Enter the grade #%d : ",i);
      scanf("%d",&grade);
      gradetotal=gradetotal+grade;
      if(grade<65)
        ++numoffails;
    }
    average=(float)gradetotal/numofgrades;
    printf("Average = %d \n",average);
    printf("Number of failures = %d \n",numoffails);
    return 0;
}
