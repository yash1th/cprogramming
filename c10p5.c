#include<stdio.h>
#include<stdbool.h>
int findString(char[],char[]);
int main(void)
{
  int result;
  result=findString("character","ract");
  if(result!=-1)
    printf("It's present\n");
  else
    printf("it's absent\n");
  return 0;
}
int findString(char a[],char b[])
{
  int i,j=0,k=0,ind;
  bool result=false;
  for(i=0;a[i]==b[0]&&a[i]!='\0';i++)
  {
  j=i+1;
  k=1;
  while(a[j]==b[k]&&a[j]!='\0'&&b[k]!='\0')
  {
    j++;
    k++;
    result=true;
    ind=i;
  }
  if(b[k]=='\0')
  {
      result=true;
      break;
  }
  result=false;
  i=i-1;
  }
  if(result)
    return ind;
  else
    return -1;
}
/*
while(a[j]==b[k]&&a[j]!='\0'&&b[k]!='\0')
{
  j++;
  k++;
  result=true;
  break;
}
*/
