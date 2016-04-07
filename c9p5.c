#include<stdio.h>
#include<stdbool.h>
struct time
{
  int hours;
  int minutes;
  int seconds;
};
struct date
{
  int month;
  int day;
  int year;
};
struct dateAndTime
{
  struct date sdate;
  struct time stime;
};
struct time timeUpdate(struct time);
bool isLeapYear(struct date);
struct date dateUpdate(struct date);
int numberOfDays(struct date);
struct dateAndTime clockKeeper(struct dateAndTime);
int main(void)
{
  struct dateAndTime first;
  printf("enter the date (MM/DD/YYYY): ");
  scanf("%d/%d/%d",&first.sdate.month,&first.sdate.day,&first.sdate.year);
  printf("enter the time (HH:MM:SS): ");
  scanf("%d:%d:%d",&first.stime.hours,&first.stime.minutes,&first.stime.seconds);

  struct dateAndTime now=clockKeeper(first);

  printf("current date is ");
  printf("%d/%d/%d",now.sdate.month,now.sdate.day,now.sdate.year);
  printf("\n");
  printf("current time is ");
  printf("%d:%d:%d",now.stime.hours,now.stime.minutes,now.stime.seconds);
  printf("\n");

  return 0;
}
struct dateAndTime clockKeeper(struct dateAndTime dt)
{
  dt.stime=timeUpdate(dt.stime);
  if(dt.stime.hours==0&&dt.stime.minutes==0&&dt.stime.seconds==0)
    dt.sdate=dateUpdate(dt.sdate);
  return dt;
}
struct time timeUpdate(struct time t)
{
  t.seconds=t.seconds+1;
  if(t.seconds==60)
    {
      t.seconds=0;
      t.minutes=t.minutes+1;
      if(t.minutes==60)
        {
          t.minutes=0;
          t.hours=t.hours+1;
          if(t.hours==24)
            {
              t.hours=0;
            }
        }
    }
  return t;
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
