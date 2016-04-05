//this program is done to explain the differences in between initialzing static variable
//differently and declaring and initialzing at the same time
#include<stdio.h>
void sas(void);
int main(void)
{
	sas();
	printf("in between function call \n");
	sas();
	return 0;
}
void sas(void)
{
	/* static int a=100;
	printf("a = %d \n",a);
	a=a+1;
	printf("a = %d \n",a); */
	static int a;
	a=100;
	printf("a = %d \n",a);
	a=a+1;
	printf("a = %d \n",a);

}
