#include<stdio.h>
//Function to read a line of text from the terminal
void readLine(char[]);
int main(void)
{
  char line[81];
  for(int i=0;i<3;i++)
    {
      readLine(line);
      printf("%s\n\n",line);
    }
    return 0;
}
void readLine(char buffer[])
{
  char character;
  int i=0;

  do{
    character=getchar();
    buffer[i]=character;
    ++i;
  }while(character!='\n');

  //even if the first character is new line it will stop going into
  //the next iteration and then makes that new character a null character
  
  buffer[i-1]='\0';
}
