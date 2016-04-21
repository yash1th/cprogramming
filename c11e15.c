#include<stdio.h>
int stringLength(char *array);
int main()
{
  int a;
  printf("%d\n",stringLength("i feel like dying now"));
  return 0;
}
int stringLength(char *array)
{
  char *temp;
  temp=array;
  while(*array)
  {
    ++array;
  }
  return array-temp;
}
