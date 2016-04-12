#include<stdio.h>
void subString(char[],int,int,char[]);
int main(void)
{
  char result[50];
  subString("two words",4,20,result);
  printf("result = %s\n",result);
  return 0;
}
void subString(char a[],int start,int end,char result[])
{
  int i,j=0;
  for(i=start;a[i]!='\0'&&j<end;i++)
    {
      result[j]=a[i];
      j++;
    }
  result[j]='\0';
}
