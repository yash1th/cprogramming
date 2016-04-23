#include<stdio.h>
#define IS_UPPER_CASE(x) (((x)>='A') && ((x)<='Z'))
#define IS_LOWER_CASE(x) (((x)>='a') && ((x)<='z'))
#define IS_ALPHABETIC(x) ((IS_UPPER_CASE(x))||(IS_LOWER_CASE(x)))
int main(void)
{
  printf("%d\n",IS_ALPHABETIC('a'));
  printf("%d\n",IS_ALPHABETIC('A'));
  printf("%d\n",IS_ALPHABETIC('B'));
  return 0;
}
