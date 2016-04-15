#include<stdio.h>
int strToInt(const char string[]);
int main(void)
{
  printf ("%i\n", strToInt("-245"));
  printf ("%i\n", strToInt("-100") + 25);
  printf ("%i\n", strToInt("13x5"));
  return 0;
}
int strToInt (const char string[])
{
  int i, intValue, result = 0;
  if(string[0]=='-')
  {
    for ( i = 1; string[i] >= '0' && string[i] <= '9' ; ++i )
      {
        intValue = '0'-string[i];
        printf("intvalue = %i\n",intValue);
        result = result * 10 + intValue;
        printf("result = %i\n",result);
      }
  }
  else
  {
    for ( i = 0; string[i] >= '0' && string[i] <= '9' ; ++i )
      {
        intValue = string[i] - '0';
        printf("intvalue = %i\n",intValue);
        result = result * 10 + intValue;
        printf("result = %i\n",result);
      }
  }
  return result;
}
