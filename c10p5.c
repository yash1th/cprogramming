#include<stdio.h>
#include<stdbool.h>
int findString(char[],char[]);
int main(void)
{
  int result;
  result=findString("chatterbox","hat");
  if(result!=-1)
    printf("It's present at %d\n",result);
  else
    printf("it's absent\n");
  return 0;
}
int findString(char a[],char b[])
{
  int i=0,j=0,k=0;
  //printf("\nstrings:\na = %s\nb = %s\n",a,b);
  //printf("\nvalues of i,j,k:\ni = %d\nj = %d\nk = %d\n",i,j,k);
  for(i=0;a[i]!='\0';i++)
  {
    //printf("\nafter for:\na[i] = %c\n",a[i]);
    if(a[i]==b[0])
    {
      //printf("\nafter if:\na[%d]= %c\n",i,a[i]);
      //printf("\nafter if:\nb[%d]= %c\n",0,b[k]);
      j=i+1;
      k=1;
      //printf("\nafter assingment of j and k:\ni = %d\nj = %d\nk = %d\n",i,j,k);
      while(a[j]==b[k]&&a[j]!='\0'&&b[k]!='\0')
      {
        //printf("\nin while:\na[%d]= %c\n",j,a[j]);
        //printf("in while:\nb[%d]= %c\n",k,b[k]);
        j++;
        k++;
        //printf("\nin while:\na[%d]= %c\n",j,a[j]);
        //printf("in while:\nb[%d]= %c\n",k,b[k]);
      }
      //printf("\nb[k] = %c\n",b[k]);
      if(b[k]=='\0')
      {
        //printf("\nb[k] = %c\n",b[k]);
        return i;
      }
    }
  }
  return -1;
}
//try to combine the if and for conditions with the for
/* the program i initially did. the wrong is with the for loop
#include<stdio.h>
    #include<stdbool.h>
    int findString(char[],char[]);
    int main(void)
    {
      int result;
      result=findString("character","har");
      if(result!=-1)
        printf("It's present\n");
      else
        printf("it's absent\n");
      return 0;
    }
    int findString(char a[],char b[])
    {
      int i,j=0,k=0,ind;
      bool result;
      printf("a = %s\nb = %s\n",a,b);
      for(i=0;a[i]==b[0]&&a[i]!='\0';i++)
      {
      j=i+1;
      k=1;
      result=true;
      while(a[j]==b[k]&&a[j]!='\0'&&b[k]!='\0')
      {
        j++;
        k++;
        printf("a[j]= %c",a[j]);
        printf("b[k]= %c",b[k]);
      }
      if(b[k]=='\0')
      {
          result=true;
          return i;
      }
      else{
      result=false;
    }
      }
      return -1;
    }


*/
