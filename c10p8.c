#include<stdio.h>
int findString(char[],char[]);
int replaceString(char[],char [],char[]);
void removeString(char a[],int start,int end);
int insertString(char a[],char b[],int pos);
int stringLength(char x[]);
int main(void)
{
  char source[]="i am a nothing guy now, won't be long though";
  int result=replaceString(source,"nothing","ntng");
  if(result!=-1)
    printf("updated string is \n%s \n",source);
  else
    printf("not possible bruh !! \n");
  return 0;
}
int replaceString(char source[],char s1[],char s2[])
{
  int findStatus=findString(source,s1);
  int insertStatus;
  if(findStatus==-1)
    return -1;
  else
    {
        removeString(source,findStatus,stringLength(s1));
        insertStatus=insertString(source,s2,findStatus);
        if(insertStatus==1)
            return 1;
        else
          return -1;
    }
}
int insertString(char a[],char b[],int pos)
{
  int i=0,j=0;
  int lengthA=stringLength(a);
  int lengthB=stringLength(b);
  if(pos>lengthA)
    return -1;
  for(i=lengthA;i>=pos;i--)
      a[i+lengthB]=a[i];
  for ( i = 0; i < lengthB; ++i )
      a[i + pos] = b[i];
  return 1;
}
int findString(char a[],char b[])
{
  int i=0,j=0,k=0;
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]==b[0])
    {
      j=i+1;
      k=1;
      while(a[j]==b[k]&&a[j]!='\0'&&b[k]!='\0')
      {
        j++;
        k++;
      }
      if(b[k]=='\0')
      {
        return i;
      }
    }
  }
  return -1;
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
int stringLength(char x[])
{
  int length=0;
  while(x[length]!='\0')
    length++;
  return length;
}
