//Program to count the number of words
//Editing c10e7.c
#include<stdio.h>
#include<stdbool.h>
int countWords(const char[]);
bool alphabetic(const char);
int main(void)
{
  const char text1[]="well, here goes.";
  const char text2[]="And h'e're w'e go... again.";

  printf("%s - words = %i \n",text1,countWords(text1));
  printf("%s - words = %i \n",text2,countWords(text2));

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
    if((c>='a' && c<='z')||(c>='A' && c<='Z')||c=='\'')
      return true;
    else
      return false;
}
