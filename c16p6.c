#include<stdio.h>
int main(void)
{
  int count=0,c;
  FILE *fname;
  char name[64];
  char again='a';
  printf("enter the name of file to be read : ");
  scanf("%s",name);
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
            }
            if(count>19)
              break;
          }
        scanf(" %c",&again);
      //be careful when you use getchar here
      //getchar just waits for something so when the count is greater than 19
      //i.e., 20. the integer c cointains 21 and it goes into the getchar()
      //that's my understanding
    }
fclose(fname);
printf("\n");
return 0;
}
