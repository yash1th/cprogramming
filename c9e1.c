#include<stdio.h>
int main(void)
{
  struct date
  {
    int month;
    int day;
    int year;
  };
  struct date today;

  today.month=4;
  today.day=5;
  today.year=2016;

  printf("Today's date is %d/%d/%d\n",today.month,today.day,today.year);
  return 0;
}
