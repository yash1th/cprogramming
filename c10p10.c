#include<stdio.h>
struct entry
{
  char word[15];
  char definition[50];
};
void dictionarySort(struct entry[]);
int compareStrings(char s1[],char s2[]);
void stringCopy(char str2[],char str1[]);
int main(void)
{
  struct entry dictionary[100] =
    { { "abc","a burrowing African mammal"},
      {  "acd","a bottomless pit"},
      {  "ace","nothing"}};
  dictionarySort(dictionary);
  for(int i=0;i<3;i++)
    {
      printf("word - %s\n",dictionary[i].word);
      //printf("")
    }
  return 0;
}

void dictionarySort(struct entry a[])
{
  struct entry temp;
  int i,j,compareValue;
  for(i=0;i<2;++i)
  {
    for(j=i+1;j<3;j++)
      {
        compareValue=compareStrings(a[i].word,a[j].word);
        if(compareValue>0)
          {
            stringCopy(temp.word,a[i].word);
            stringCopy(temp.definition,a[i].definition);

            stringCopy(a[i].word,a[j].word);
            stringCopy(a[i].definition,a[j].definition);

            stringCopy(a[j].word,temp.word);
            stringCopy(a[j].definition,temp.definition);


          }
      }
  }
}
int compareStrings(char s1[],char s2[])
{
  int i=0,answer;

  while(s1[i]==s2[i] && s1[i] != '\0' && s2[i]!='\0')
      ++i;
  if(s1[i]<s2[i])
      answer=-1;
  else if(s1[i]==s2[i])
        answer=0;
  else
        answer=1;
  return answer;
}
void stringCopy(char str2[],char str1[])
{
    int i=0;
    while(str1[i]!='\0')
    {
         str2[i] = str1[i];
         i++;
    }
    str2[i]='\0';
}
