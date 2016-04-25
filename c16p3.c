#include<stdio.h>
#define IS_UPPER_CASE(x) (((x)>='A')&&((x)<='Z'))
#define IS_LOWER_CASE(x) (((x)>='a')&&((x)<='z'))
#define IS_ALPHABET(x) ((IS_LOWER_CASE(x)) || (IS_UPPER_CASE(x)))
int main(void)
{
  FILE *from, *to;
  char inName[64],outName[64];
  printf("enter the name of the file to be copied : ");
  scanf("%63s",inName);
  printf("enter the name of the file to be copied to : ");
  scanf("%63s",outName);
  if((from=fopen(inName,"r"))==NULL){
    printf("file that have to be read can't be opened \n");
    return 1;
  }
  if((to=fopen(outName,"w"))==NULL){
    printf("file that have to be written can't be opened \n");
    return 1;
  }
  int c;
  while((c=getc(from))!=EOF)
  {
    if(IS_ALPHABET(c)){
      if(IS_LOWER_CASE(c))
          putc(c-'a'+'A',to);
      else
          putc(c,to);
    }
    else
      putc(c,to);
  }
  fclose(from);
  fclose(to);
  printf("File has been copied bruh\n");
  while((c=getc(to))!=EOF)
    putchar(c);
  return 0;
}
//Write a program to copy one file to another,
//replacing all lowercase characters with their uppercase equivalents
