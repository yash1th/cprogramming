#include<stdio.h>
int main(void)
{
	int result,result2,result3,result4;
	result=21528/3600;
	result2=21528%3600;
	result3=result2/60;
	result4=result2%60;
	printf("Result = %d \n",result);
	printf("Result2 = %d \n",result2);
	printf("Result3 = %d \n",result3);
	printf("Result4 = %d \n",result4);
	return 0;
}
