#include<stdio.h>
int main(void)
{
  FILE *fname;
  char name[64];

  printf("enter the name of the file : ");
  scanf("%63s",name);

  int m,n,c,colnum;
  printf("enter the first column : ");
  scanf("%i",&m);
  printf("enter the last column : ");
  scanf("%i",&n);

  if((fname=fopen(name,"r"))==NULL){
    printf("cannot open %s\n",name);
    return 1;
  }
  else{
    colnum=1;
    while((c=getc(fname))!=EOF){
      if(c=='\n'){
        putchar('\n');
        colnum=0;
      }
      else if(colnum>=m && colnum<=n)
                putchar(c);
      ++colnum;
    }
 fclose(fname);
 printf("\n");
 return 0;
}
}
