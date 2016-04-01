#include<stdio.h>
int main(void)
{
	float term1=3.31e8,term2=2.01e7,term3=7.16e6,term4=2.01e8;
	float total=(term1*term2)/(term3+term4);
	printf("total is %f \n",total);
	return 0;

}
