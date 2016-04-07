#include<stdio.h>
struct month
{
	int numberOfDays;
	char name[3];
};
int main(void)
{
	struct month year[12];
	for(int i=0;i<12;i++)
		{
			printf("Enter name of month %d : ",i+1);
			for(int j=0;j<3;j++)
				scanf(" %c",&year[i].name[j]);
			printf("enter number of days in ");
			for(int j=0;j<3;j++)
				printf("%c",year[i].name[j]);
			printf(" : ");
			scanf("%d",&year[i].numberOfDays);
			printf("\n");
		}
	printf("\n\n\n");
	printf("Name of the Month              number of days\n");
	printf("-----------------              --------------\n");
	for(int i=0;i<12;i++)
	{
		printf("        ");
		for(int j=0;j<3;j++)
			printf("%c",year[i].name[j]);
		printf("                         ");
		printf("%i",year[i].numberOfDays);
		printf("\n");
	}
	/*for(int i=0;i<12;i++)
		{
			printf("Number of days in ");
			for(int j=0;j<3;j++)
				printf("%c",year[i].name[j]);
			printf(" are ");
			printf("%i",year[i].numberOfDays);
			printf("\n");
		}*/
	printf("\n");
	return 0;
}
