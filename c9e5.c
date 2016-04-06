#include<stdio.h>
struct time
{
  int hours;
  int minutes;
  int seconds;
};
struct time timeUpdate(struct time);
int main(void)
{
  struct time present;
  printf("enter the current time (HH MM SS): ");
  scanf("%d:%d:%d",&present.hours,&present.minutes,&present.seconds);
  //printf("Present time is : %2d %2d %2d\n",present.hours,present.minutes,present.seconds);
  struct time nextTime=timeUpdate(present);
  printf("Current time is : %2d:%2d:%2d\n",nextTime.hours,nextTime.minutes,nextTime.seconds);
  return 0;
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
