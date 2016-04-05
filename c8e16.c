#include<stdio.h>
unsigned long long int factorial(int);
int main()
{
	long long int result;
	result=factorial(10);
	printf("Result = %lld ",result);
	return 0;
}
unsigned long long int factorial(int n)
{
	unsigned long long int result;
	if(n==0)
	{
		 result=1;
		 printf("result = 1 executed \n");
	}
	else
		{
		result=n*factorial(n-1);
		printf("result= %d * factorial(%d) \n",n,n-1);
	}
	return result;

}
