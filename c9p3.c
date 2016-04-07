#include<stdio.h>
struct time
{
  int hours;
  int minutes;
  int seconds;
};
struct time elapsedTime(struct time,struct time);
struct time secondsToTime(long int);
long int timeToSeconds(struct time);
int main(void)
{
  struct time time1,time2,differenceTime;
  printf("enter time1 (HH:MM:SS) : ");
  scanf("%d:%d:%d",&time1.hours,&time1.minutes,&time1.seconds);
  printf("enter time2 (HH:MM:SS) : ");
  scanf("%d:%d:%d",&time2.hours,&time2.minutes,&time2.seconds);
  differenceTime=elapsedTime(time1,time2);
  printf("elapsed time is : \n");
  printf("%d:%2d:%2d\n",differenceTime.hours,differenceTime.minutes,differenceTime.seconds);
  return 0;
}
struct time elapsedTime(struct time t1,struct time t2)
{
  struct time timeDifference;
  long int totalSeconds1,totalSeconds2;
  totalSeconds1=timeToSeconds(t1);
  totalSeconds2=timeToSeconds(t2);
  timeDifference=secondsToTime(totalSeconds2-totalSeconds1);
  return timeDifference;
}
long int timeToSeconds(struct time t)
{
  long int hoursToSeconds,minutesToSeconds;
  hoursToSeconds=t.hours*3600;
  minutesToSeconds=t.minutes*60;
  long int totalSeconds=hoursToSeconds+minutesToSeconds+t.seconds;
  return totalSeconds;

}
struct time secondsToTime(long int sec)
{
  int result,result2,result3,result4;
	result=sec/3600;
	result2=sec%3600;
	result3=result2/60;
	result4=result2%60;
  struct time resultTime;
  resultTime.hours=result;
  resultTime.minutes=result3;
  resultTime.seconds=result4;
	return resultTime;
}
