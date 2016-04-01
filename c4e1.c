#include<stdio.h>
int main(void)
{
	//Declaring variables
	int integerVar=100;
	float floatingVar=331.79;
	double doubleVar=8.44e+11;
	char charVar='W';
	_Bool boolVar=0;

	//Displaying the results
	printf("integerVar = %i\n",integerVar);
	printf("floatingVar = %f\n",floatingVar);
	printf("doubleVar = %e\n",doubleVar);
	printf("doubleVar = %g\n",doubleVar);
	printf("boolVar = %i\n",boolVar);
	printf("charVar = %c\n",charVar);
	
	//Return
	return 0;
}
