#include<stdio.h>
int sum(int);
int main(void)
{
	int result;
	result=sum(10);
	printf("sum in main = %d \n",result);
	return 0;
}
int sum(int n)
{
	int result=0;
	if(n==0)
		result=0;
	else
		result=n+sum(n-1);
	return result;

}
