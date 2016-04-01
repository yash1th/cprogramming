#include<stdio.h>
int main(void)
{
  float a,b;
  char operator;
  printf("Enter the numbers and the expression to compute between them : \n");
  scanf("%f %c %f",&a,&operator,&b);
  if(operator=='+')
    printf("The sum of %f and %f is %f \n",a,b,a+b);
  else if(operator=='-')
    printf("The subtraction of %f and %f is %f \n",a,b,a-b);
  else if(operator=='*')
    printf("The multiplication of %f and %f is %f \n",a,b,a*b);
  else if(operator=='/')
    printf("The division of %f and %f is %f \n",a,b,a/b);
  else
    printf("Enter a valid operator \n");
  return 0;
}
