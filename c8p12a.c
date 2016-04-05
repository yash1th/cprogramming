#include<stdio.h>
void transposeMatrix(int[4][5],int[5][4]);
int main(void)
{
  int a[4][5],b[5][4],i,j;
  for(i=0;i<4;i++)
    for(j=0;j<5;j++)
    {
      a[i][j]=0;
    }
  for(i=0;i<5;i++)
    for(j=0;j<4;j++)
    {
        b[i][j]=0;
    }
  printf("enter the matrix 4x5:\n");
  for(i=0;i<4;i++)
  {
    printf("Enter row %d :\n",i+1);
    for(j=0;j<5;j++)
    {
      scanf("%d",&a[i][j]);
    }
    printf("\n");
  }
  transposeMatrix(a,b);
  printf("transposed matrix is : \n");
  for(i=0;i<5;i++)
  {
    for(j=0;j<4;j++)
    {
      printf("%2d    ",b[i][j]);
    }
    printf("\n");
  }
  return 0;
}
void transposeMatrix(int x[4][5],int y[5][4])
{
  for(int i=0;i<4;i++)
    {
      for(int j=0;j<5;j++)
        {
          y[j][i]=x[i][j];
        }
    }
}
