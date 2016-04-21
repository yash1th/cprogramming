//Trying to demonstrate how pointers to functions work
//but couldn't figure it out
#include<stdio.h>
int sum(int,int);
int subtract(int,int);
int division(int,int);
int multiplication(int,int);
int main(void)
{
  int (*sumPtr) (int,int);
  sumPtr=sum;
  int (*subtractPtr) (int,int);
  subtractPtr=subtract;
  int (*divPtr) (int,int);
  divPtr=division;
  int (*mulPtr) (int,int);
  mulPtr=multiplication;
  int *ops[]={ sumPtr,subtractPtr,divPtr,mulPtr};

  int a,b;
  printf("enter two numbers : ");
  scanf("%d%d",&a,&b);
  printf("enter the operation you want")



}
int doNothing(int a)
{
  return a+1;
}
