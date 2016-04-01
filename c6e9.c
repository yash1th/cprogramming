#include<stdio.h>
int main(void)
{
  float a,b;
  char operator;
  printf("Enter the numbers and the expression to compute between them : \n");
  scanf("%f %c %f",&a,&operator,&b);
  switch(operator)
  {
    case '+':
              printf("The sum of %f and %f is %f \n",a,b,a+b);
              break;
    case '-':
              printf("The subtraction of %f and %f is %f \n",a,b,a-b);
              break;
    case '*':
              printf("The multiplication of %f and %f is %f \n",a,b,a*b);
              break;
    case '/':
              if(b==0)
              printf("division is not possible");
              else
              printf("The division of %f and %f is %f \n",a,b,a/b);
              break;
    default:
              printf("Enter a valid operator \n");


  }
  return 0;
}
