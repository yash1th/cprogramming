//Program to copy one file to another -- version 2
//by using arguments

#include<stdio.h>
int main(int argc,char *argv[])
{
  if(argc!=3){
    printf("need two files\n");
    return 1;
  }
  FILE *from, *to;
  int c;
  if((from=fopen(argv[1],"r"))==NULL){
    printf("%s cannot be read\n",argv[1]);
    return 2;
  }
  if((to=fopen(argv[2],"w"))==NULL){
    printf("%s cannot be write\n",argv[2]);
    return 2;
  }
  while((c=getc(from))!=EOF)
    putc(c,to);
  printf("File has been copied\n");
  fclose(from);
  fclose(to);
  return 0;
}

//to create a custom executable like a.out
//we need compile the program little bit different
// $cc programname -o executablename
// $./executablename (parameters to the main)
