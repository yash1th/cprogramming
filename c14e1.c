#include<stdio.h>
int main(void)
{
  enum month {january=1,february,march,april,may,june,july,august,
              september,october,november,december};
  enum month aMonth;
  int days;
  printf("enter number of month : ");
  scanf("%d",&aMonth);
  int a=8;
  aMonth=a-1;
  switch(aMonth)  {

      case january:
      case march:
      case may:
      case july:
      case august:
      case october:
      case december:
              days=31;
              break;
      case april:
      case june:
      case november:
              days=30;
              break;
      case february:
              days=28;
              break;
      default:
              printf("bad month number \n");
              days=0;
              break;
  }
  if(days!=0)
    printf("number of days in %d is %d\n",aMonth,days);
  if(aMonth==2)
    printf("...or 29 if its a leap year\n");
  return 0;
}
