#include<stdio.h>
struct date
{
  int month;
  int day;
  int year;
};
int difference(struct date,struct date);
long int calculateN(struct date);
int getF(int,int);
int getG(int);
int absolute(int);
int main(void)
{
  struct date date1,date2;
  printf("enter the date1 (MM/DD/YYYY): ");
  scanf("%d/%d/%d",&date1.month,&date1.day,&date1.year);
  printf("enter the date2 (MM/DD/YYYY): ");
  scanf("%d/%d/%d",&date2.month,&date2.day,&date2.year);
  int numberOfDays=difference(date1,date2);
  printf("Number of days between %d/%d/%d and %d/%d/%d are : %d\n",
          date1.month,date1.day,date1.year,date2.month,date2.day,date2.year,numberOfDays);

  return 0;
}
int difference(struct date d1,struct date d2)
{
  long int n1,n2;
  int days;
  n1=calculateN(d1);
  n2=calculateN(d2);
  days=absolute(n2-n1);
  return days;
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
int absolute(int a)
{
  if(a<0)
    return -a;
  else
    return a;
}
