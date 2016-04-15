#include<stdio.h>
void removeString(char[],int,int);
int main()
{
  char text[]={"the wrong son"};
  removeString(text,4,6);
  printf("text now is : %s \n",text);
  return 0;
}
void removeString(char a[],int start,int end)
{
  int i;
  for(i=start;a[i]!='\0';i++)
    {
      a[i]=a[i+end];
    }
  a[i-1]='\0';
}
