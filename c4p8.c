#include<stdio.h>
int main(void)
{
	int i,j;
	int total;
	printf("Enter the value of i= ");
	scanf("%d",&i);
	printf("Enter the value of h= ");
	scanf("%d",&j);
	total=i+j-i%j;
	printf("Total= %d \n",total);
	return 0;	
}
