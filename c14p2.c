#include<stdio.h>
enum month {january=1,february,march,april,may,june,july,august,september,
            october,november,december};
char *monthName(enum month);
int main(void)
{
  enum month aMonth;
  printf("enter the month number : ");
  scanf("%d",&aMonth);
  printf("%s\n",monthName(aMonth));
  return 0;
}
char *monthName(enum month a)
{
  switch(a){
    case january: return "january";break;
    case february: return "february";break;
    case march: return "march";break;
    case april: return "april";break;
    case may: return "may";break;
    case june: return "june";break;
    case july: return "july";break;
    case august: return "august";break;
    case september: return "september";break;
    case october: return "october";break;
    case november: return "november";break;
    case december: return "december";break;
    default: return "wrong value of the month";break;
  }
}
