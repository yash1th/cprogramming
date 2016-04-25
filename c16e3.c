#include<stdio.h>
int main(void)
{
  char inName[64], outName[64];
  FILE *in,*out;

  printf("enter the name of the file to be copied : ");
  scanf("%63s",inName);
  printf("enter the name of the file to be copied into: ");
  scanf("%63s",outName);

  if((in=fopen(inName,"r"))==NULL){
    printf("%s can't be opened for reading\n",inName);
    return 1;
    //since i don't want to run the program anymore
  }
  if((out=fopen(outName,"w"))==NULL){
    printf("%s can't be opened for writing \n",inName);
    return 1;
    //since i don't want to run the program anymore
  }
  int c;
  while((c=getc(in))!=EOF)
    putc(c,out);
  //close open files after the writing is done

  fclose(in);
  fclose(out);

  printf("File has been copied bruh \n");
  return 0;
}
