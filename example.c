#include<stdio.h>
int main(void)
{
	char word[]={'y','a','s','h','\0'};
	int i;
	for(i=0;word[i]!='\0';++i)
		printf("%c",word[i]);
	printf("%d",i);
	return 0;
}
