#include<stdio.h>
int main(void)
{
	int t;
	printf("Enter the value of triangular number: ");
	scanf("%d",&t);
 	int total=0;
	for(int i=1;i<=t;i++)
	{
		total=total+i;
	}
	printf("Value of triangular number = %d",total);
	return 0;
}
