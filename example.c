#include<stdio.h>
void nothing(int b[2])
{
	b[0]+=10;
	b[1]+=10;
}
int main()
{
	int a[2];
	a[0]=1;
	a[1]=2;
	nothing(a);
	printf("a[0] = %d \n",a[0]);
	printf("a[1] = %d \n",a[1]);
	return 0;
}
