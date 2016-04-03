#include<stdio.h>
int main(void)
{
  int number,baseArray[200],index,base,nextDigit;
  char again='a';
  const char baseDigits[16] = {
'0', '1', '2', '3', '4', '5', '6',
'7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
  for(int i=0;i<200;i++)
    baseArray[i]=0;
  int tempNumber;
  do
  {
    printf("Enter the number in base 10 =  ");
    scanf("%d",&number);
    printf("Enter the base you want %d to convert to : ",number);
    scanf("%d",&base);
    tempNumber=number;
    index=0;
    while(tempNumber!=0)
    {
      baseArray[index]=tempNumber%base;
      index=index+1;
      tempNumber=tempNumber/base;
    }
    printf("%d in base %d = ",number,base);
    for(int i=index-1;i>=0;i--)
    {
        nextDigit=baseArray[i];
        printf("%c",baseDigits[nextDigit]);
    }
    printf("\n");
    printf("Do you to do it again (y/n) : ");
    scanf(" %c",&again);
    while(again!='y' && again!='n')
    {
      printf("enter a valid input (y/n) : ");
      scanf(" %c",&again);
    }
  }while(again!='n');
  printf("Okay bye mate !! \n");
  return 0;
}
