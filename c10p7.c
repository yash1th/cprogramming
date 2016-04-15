#include<stdio.h>
int insertString(char[],char[],int);
int stringLength(char[]);
int main()
{
  char str1[]="the wrong son";
  //char str2[]="per";
  int result=insertString(str1,"per",10);
  if(result!=-1)
    printf("string 1 is : %s \n",str1);
  else
    printf("Not possible\n");
  return 0;
}
int insertString(char a[],char b[],int pos)
{
  int i=0,j=0;
  char temp=' ';
  int lengthA=stringLength(a);
  int lengthB=stringLength(b);
  printf("length a: %i\n",lengthA);
  if(pos>lengthA)
    return -1;
  printf("checking : %c\n",a[13]);
  for(i=lengthA;i>=pos;i--)
      a[i+lengthB]=a[i];
  for ( i = 0; i < lengthB; ++i )
      a[i + pos] = b[i];
  return 1;
}
int stringLength(char x[])
{
  int length=0;
  while(x[length]!='\0')
    length++;
  return length;
}

//i tried to do some stuff in here but it aint' working
/*for(i=pos;a[i]!='\0';i++)
  {
    if(b[j]!='\0')
      {
        temp=a[i];
        a[i]=b[j];
        b[j]=temp;
        j++;
      }
  }
for(i=pos+lengthB;;i++)
{
  a[i+lengthB]=a[i];
}
}
printf("b = %s\n",b);
for(i=pos;a[i]!='\0';i++)
{
if(b[j]!='\0')
  {
    a[i]=b[j];
    j++;
  }
}
printf("%s\n",b); */
