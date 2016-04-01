#include<stdio.h>
int main(void)
{
	int a=100;
	int b=2;
	int c=25;
	int d=4;
	int result;
	
	//Subtraction
	result=a-b;
	printf("a-b = %d \n",result);
	
	//Multiplication
	result=b*c;
	printf("b*c = %d \n",result);
	
	//Division
	result=a/c;
	printf("a/c = %d \n",result);
	
	//Precedence
	result = a+b*c;
	printf("a+b*c = %d \n",result);
	
	printf("a*b+c*d = %d \n", a*b+c*d);
	
	//return
	return 0;

}
