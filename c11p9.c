#include<stdio.h>
//Function to read a line of text from the terminal
void readLine(char *);
int main(void)
{
  char *line;
  readLine(line);
  while(*line!='\0'){
    printf("%c",*line);
    ++line;
  }
  printf("\n");
  return 0;
}
void readLine(char *buffer)
{
  int i=0;

  do{
    *(buffer+i)=getchar();
    ++i;
  }while(*(buffer+i-1)!='\n');

  *(buffer+i-1)='\0';
}

//Rewrite the readLine function from Chapter 10 so that it uses a
//character pointer rather than an array.
