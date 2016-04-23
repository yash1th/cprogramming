#include<stdio.h>
#define IS_UPPER_CASE(x) (((x)>='A') && ((x)<='Z'))
int main(void)
{
  printf("%d \n",IS_UPPER_CASE('C'));
  printf("%d \n",IS_UPPER_CASE('c'));
  return 0;
}
