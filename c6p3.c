#include<stdio.h>
int main(void)
{
  float a,b,result;
  printf("Enter the two numbers : ");
  scanf("%f %f",&a,&b);
  if(b==0)
    printf("Division not possible \n");
  else
      {
        result=a/b;
        printf("The result %.3f/%.3f is %.3f \n",a,b,result);

      }
  return 0;
}
