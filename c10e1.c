//Function to concatenate two character arrays
#include<stdio.h>
void concat(char[],const char[],int,const char[],int);
int main()
{
  const char str1[5]={'t','e','s','t',' '};
  const char str2[6]={'w','o','r','k','s','.'};
  char str3[11];

  concat(str3,str1,5,str2,6);

  for(int i=0;i<11;i++)
    printf("%c",str3[i]);

  printf("\n");
  return 0;
}
void concat(char s3[],const char s1[],int n1,const char s2[],int n2)
{
  int i;

  for(i=0;i<n1;i++)
    s3[i]=s1[i];

  for(i=0;i<n2;i++)
    s3[i+n1]=s2[i];
}
