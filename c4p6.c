#include<stdio.h>
int main(void)
{
	double a=3,b=-5,c=6;
	double x=2.55;
	float term1,term2,result;
	term1=3*(x*x*x);
	term2=-5*(x*x);
	result=term1+term2+6;
	// printf("value of the given expression is %f",3*(x^3.0)-5*(x^2.0)+6);
	printf("%f",result);
	return 0;

}
