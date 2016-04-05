#include<stdio.h>
void transposeMatrix(int a,int b,int[a][b],int[b][a]);
int main(void)
{
  int i,j;
  int rows,columns;
  printf("Enter the number of rows : ");
  scanf("%d",&rows);
  printf("Enter the number of columns : ");
  scanf("%d",&columns);
  int a[rows][columns],b[columns][rows];
  for(i=0;i<rows;i++)
    for(j=0;j<columns;j++)
    {
      a[i][j]=0;
    }
  for(i=0;i<columns;i++)
    for(j=0;j<rows;j++)
    {
        b[i][j]=0;
    }
  printf("enter the matrix of %dx%d\n",rows,columns);
  for(i=0;i<rows;i++)
  {
    printf("Enter row %d :\n",i+1);
    for(j=0;j<columns;j++)
    {
      scanf("%d",&a[i][j]);
    }
  }
  transposeMatrix(rows,columns,a,b);
  printf("transposed matrix is : \n");
  for(i=0;i<columns;i++)
  {
    for(j=0;j<rows;j++)
    {
      printf("%2d    ",b[i][j]);
    }
    printf("\n");
  }
  return 0;
}
void transposeMatrix(int nrows,int ncolumns,int x[nrows][ncolumns],int y[ncolumns][nrows])
{
  for(int i=0;i<nrows;i++)
    {
      for(int j=0;j<ncolumns;j++)
        {
          y[j][i]=x[i][j];
        }
    }
}
