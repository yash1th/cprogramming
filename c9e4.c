#include<stdio.h>
#include<stdbool.h>
struct date
{
  int day;
  int month;
  int year;
};
int numberOfDays(struct date d);
bool isLeapYear(struct date d);
struct date dateUpdate(struct date d);
int main(void)
{
  struct date today,nextDay;
  printf("enter today's date (MM DD YYYY): ");
  scanf("%i %i %i",&today.month,&today.day,&today.year);
  nextDay=dateUpdate(today);
  printf("Tomorrow's date is %d/%d/%d \n",nextDay.month,nextDay.day,nextDay.year);
  return 0;
}
struct date dateUpdate(struct date today)
{
  struct date tomorrow;
  if(today.day!=numberOfDays(today))
    {
      tomorrow.day=today.day+1;
      tomorrow.month=today.month;
      tomorrow.year=today.year;
    }
  else if(today.month==12)
  {
    tomorrow.day=1;
    tomorrow.month=1;
    tomorrow.year=today.year+1;
  }
  else
  {
    tomorrow.day=1;
    tomorrow.month=today.month+1;
    tomorrow.year=today.year;
  }
  return tomorrow;
}
int numberOfDays(struct date d)
{
  const int daysPerMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int days;
  if(isLeapYear(d)==true && d.month==2)
    days=29;
  else
    days=daysPerMonth[d.month-1];
  return days;
}
bool isLeapYear(struct date d)
{
  bool leap;
  if((d.year%4==0 && d.year%100!=0)||d.year%400==0)
    leap=true;
  else
    leap=false;
  return leap;
}
