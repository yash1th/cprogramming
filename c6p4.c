#include<stdio.h>
int main(void)
{
  char operator,operator2;
  float a,b,result,acc;
  printf("Enter the number and operator : \n");
  scanf("%f %c",&a,&operator);
  if(operator=='S')
    {
      result=0;
      acc=a;
      printf("Enter the number and operator : \n");
      scanf("%f %c",&b,&operator2);
      while(operator2!='E')
        {
          if(operator2=='+')
            {
              acc=acc+b;
              printf("Result is %f \n",acc);
            }
          else if(operator2=='-')
            {
              acc=acc-b;
              printf("Result is %f \n",acc);
            }
          else if(operator2=='/')
              {
                if(b==0)
                  {
                    printf("division not possible \n");
                    return 0;
                  }
                else
                    {
                      acc=acc/b;
                      printf("Result is %f \n",acc);
                    }
              }
          else if(operator2=='*')
              {
              acc=acc*b;
              printf("Result is %f \n",acc);
            }
          else
              {
              printf("Not a valid operator \n ");
              printf("result = %f",acc);
              break;
            }
          printf("Enter the number and operator : \n");
          scanf("%f %c",&b,&operator2);

        }
        printf("Result is %f \n",acc);
    }

  else if(operator=='E')
    {
      printf("there's nothing to perform. so the result is %f \n",a);
    }
  else
      printf("Not a valid operator. First enter the value into accumulator \n");
  return 0;
}
