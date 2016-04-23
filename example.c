#include<stdio.h>
#define YES 2
int main(void)
{
  printf("amam = %d\n",YES);
  #undef YES
  #define YES 4
  printf("amam = %d\n",YES);
  return 0;
}
