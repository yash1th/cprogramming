#include<stdio.h>
int main(void)
{
  struct date
  {
    int month;
    int day;
    int year;
  };

  struct date today, *datePtr;

  datePtr=&today;

  datePtr->month=9;
  datePtr->day=25;
  datePtr->year=2004;

  printf("today's date is %i/%i/%i\n",datePtr->month,datePtr->day,datePtr->year);
  return 0;
}
