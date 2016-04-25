#include<stdio.h>
int main(void)
{
  FILE *file1, *file2;
char name1[64],name2[64];
printf("enter the name of the file1 : ");
scanf("%63s",name1);
printf("enter the name of the file2 : ");
scanf("%63s",name2);
if((file1=fopen(name1,"r"))==NULL){
  printf("file1 that have to be read can't be opened \n");
  return 1;
}
if((file2=fopen(name2,"r"))==NULL){
  printf("file2 that have to be read can't be opened \n");
  return 1;
}
int c1,c2;
while(1)
{
  while((c1=getc(file1))!=EOF)
  {
      if((char)c1=='\n')
      {
        fprintf(stdout,"\n");
        break;
      }
      else
        fprintf(stdout,"%c",(char)c1);

  }
  while((c2=getc(file2))!=EOF)
  {
    if((char)c2=='\n'){
      fprintf(stdout,"\n");
      break;
    }
    else
      fprintf(stdout,"%c",(char)c2);

  }
  if(c1==EOF && c2==EOF)
      break;
}
fclose(file1);
fclose(file2);
printf("\n");
return 0;
}
