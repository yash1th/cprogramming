#include<stdio.h>
int main(void)
{
  int a,b;
  printf("Enter the two numbers = ");
  scanf("%d %d",&a,&b);
  int temp;
  while (b!=0) {
      temp=a%b;
      a=b;
      b=temp;

}
  printf("The GCD of %d",a,b,a);
  return 0;
}
