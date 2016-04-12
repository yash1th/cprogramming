//Program to count the number of words
#include<stdio.h>
#include<stdbool.h>
int countWords(const char[]);
bool alphabetic(const char);
void readLine(char buffer[]);
int main(void)
{
  char text[81];
  int totalWords=0;
  bool endOfText=false;
  printf("Hey bud, type in your text \n");
  printf("when you are done, press 'RETURN'. \n\n");
  while(!endOfText)
    {
      readLine(text);
      if(text[0]=='\0')
        endOfText=true;
      else
        totalWords=totalWords+countWords(text);
    }
  printf("\nThere are %i words in the above text.\n",totalWords);
  return 0;
}
//Function to determine if a character is alphabeitc
int countWords(const char string[])
{
  int i,wordCount=0;
  bool lookingForWord=true;
  for(i=0;string[i]!='\0';++i)
    {
      if(alphabetic(string[i]))
        {
          if(lookingForWord)
            {
              ++wordCount;
              lookingForWord=false;
            }
        }
      else
        lookingForWord=true;
    }
  return wordCount;
}
bool alphabetic(const char c)
{
    if(((c>='a' && c<='z')||(c>='A' && c<='Z')||c=='\'')||((c>='0' && c<='9')||c=='.'||c==','||c=='-'))
      return true;
    else
      return false;
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
  buffer[i-1]='\0';
}
