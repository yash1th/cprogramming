#include<stdio.h>
int main(void)
{
	int t;
 	int total;
	int nums;
	int i,j;
	printf("Enter the number of triangular numbers you want to calculate = ");
	scanf("%d",&nums);
	for(i=1;i<=nums;i++)
	{

		printf("Enter the value of triangular number %d : ",i);
		scanf("%d",&t);
		total=0;
		for(j=1;j<=t;j++)
			{
				total=total+j;

			}
		printf("Total= %d \n",total);
	}
		return 0;
}
