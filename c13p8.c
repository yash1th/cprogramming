#include<stdio.h>
#define IS_UPPER_CASE(x) (((x)>='A') && ((x)<='Z'))
#define IS_LOWER_CASE(x) (((x)>='a') && ((x)<='z'))
#define IS_ALPHABETIC(x) ((IS_UPPER_CASE(x))||(IS_LOWER_CASE(x)))
#define IS_DIGIT(x) (((x)>='0') && ((x)<='9'))
#define IS_SPECIAL(x) ((IS_DIGIT(x))||(IS_ALPHABETIC(x)))
int main(void)
{
  printf("%d\n",IS_SPECIAL(';'));
  printf("%d\n",IS_SPECIAL('A'));
  printf("%d\n",IS_SPECIAL('a'));
  printf("%d\n",IS_SPECIAL('7'));
  printf("%d\n",IS_SPECIAL('?'));
  return 0;

}
