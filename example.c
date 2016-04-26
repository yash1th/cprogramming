#include<stdio.h>
int main(void)
{
  int count=0,c;
  FILE *fname;
  char name[64];
  char again='a';
  printf("enter the name of file to be read : ");
  scanf("%s[^\n]",name);
  if((fname=fopen(name,"r"))==NULL){
    printf("file %s cannot be opened for reading \n",name);
    return 1;
  }
  while(again!='q'){
      count=0;
      while((c=getc(fname))!=EOF)
          {
            if(c!='\n')
              {
                putchar(c);
              }
            else{
              putchar('\n');
              count++;
              printf("count = %i\n",count);
              }
            if(count>19)
              break;
          }
      again=getchar();
      printf("again = %c\n",again);
    }
fclose(fname);
printf("\n");
return 0;
}
