#include<stdio.h>
int main(void)
{
	struct time
	{
		int a;
		int b;
		int c;
	};
	struct time t;
	t=(struct time){0,1,2};
	printf("%d\n%d\n%d\n",t.a,t.b,t.c);
	return 0;
}
