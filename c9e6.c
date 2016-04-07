#include<stdio.h>
struct time
{
  int hours;
  int minutes;
  int seconds;
};
struct time timeUpdate(struct time t);
int main(void)
{
  int i;
  struct time testTimes[5]=
  {{11,59,59},{12,0,0},{1,29,59},{ 23, 59, 59 }, { 19, 12, 27 }};
  for(i=0;i<5;i++)
  {
      printf("Time is %.2i:%.2i:%.2i \n", testTimes[i].hours,testTimes[i].minutes, testTimes[i].seconds);
      testTimes[i]=timeUpdate(testTimes[i]);
      printf("one second later is %.2i:%.2i:%.2i \n", testTimes[i].hours,testTimes[i].minutes, testTimes[i].seconds);
  }
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
