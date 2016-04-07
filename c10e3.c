//concatenation using variable length arrays
//we don't need length of the arrays since we have null character
//to check the end of the character array
#include<stdio.h>
void concat(char[],const char[],const char[]);
int main(void)
{
  const char s1[]={"Test "};
  const char s2[]={"Works."};
  char s3[20];

  concat(s3,s1,s2);

  //here if i use printf, it will stop displaying when it encountered a null character
  printf("%s\n",s3);

  //if i go through entire array by using a loop to be displayed.
  //there are unnecessary characters that will come at the end
  //may be unintialized characters ?
  for(int i=0;i<20;i++)
    printf("%c",s3[i]);
  printf("\n");
  return 0;
}
void concat(char result[],const char str1[],const char str2[])
{
  int i,j;

  //Copying first string into the result
  for(i=0;str1[i]!='\0';i++)
    result[i]=str1[i];

  //Copying second string into the result
  for(j=0;str2[j]!='\0';j++)
    result[i+j]=str2[j];

  //terminate the concatenated string with a null character
  result[i+j]='\0';
}
