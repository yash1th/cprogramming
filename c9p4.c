#include<stdio.h>
struct date
{
  int month;
  int day;
  int year;
};
long int calculateN(struct date);
int getF(int,int);
int getG(int);
void findDay(long int);
int main(void)
{
  struct date date1;
  printf("enter the date (MM/DD/YYYY): ");
  scanf("%d/%d/%d",&date1.month,&date1.day,&date1.year);
  long int dayNumber=calculateN(date1);
  findDay(dayNumber);
  return 0;
}
void findDay(long int dayNumber)
{
  long int temp=dayNumber-621049;
  int result=temp%7;
  if(result==0)
    printf("given date is sunday\n");
  else if(result==1)
    printf("given date is monday\n");
  else if(result==2)
    printf("given date is tuesday\n");
  else if(result==3)
    printf("given date is wednesday\n");
  else if(result==4)
      printf("given date is thursday\n");
  else if(result==5)
      printf("given date is friday\n");
  else if(result==6)
      printf("given date is saturday\n");
  else;

}
long int calculateN(struct date d)
{
  long int N;
  N=((1461*getF(d.year,d.month))/4)+(153*getG(d.month)/5)+d.day;
  return N;
}
int getF(int year,int month)
{
  int freturn;
  if(month<=2)
    freturn=year-1;
  else
    freturn=year;
  return freturn;
}
int getG(int month)
{
  int greturn;
  if(month<=2)
    greturn=month+13;
  else
    greturn=month+1;
  return greturn;
}
