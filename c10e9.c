#include<stdio.h>
#include<stdbool.h>
struct entry
{
  char word[15];
  char definition[50];
};
int lookup(const struct entry dictionary[],const char search[],const int entries);
bool equalStrings (const char s1[], const char s2[]);
int main(void)
{
  const struct entry dictionary[100] =
    { { "aardvark","a burrowing African mammal"},
      {  "abyss","a bottomless pit"},
      {  "acumen","mentally sharp; keen"},
      {  "addle","to become confused"},
      {  "aerie","a high nest"},
      {  "affix","to append; attach"},
      {  "agar","a jelly made from seaweed"},
      {  "ahoy","a nautical call of greeting"},
      {  "aigrette","an ornamental cluster of feathers"},
      {  "ajar","partially opened"}};

  char word[15];
  int entries=10;
  int entry;
  printf("Enter word: ");
  scanf("%14s",word);
  entry=lookup(dictionary,word,entries);
  if(entry!=-1)
    printf("%s\n",dictionary[entry].definition);
  else
    printf("sorry, the word %s is not in my dictionary. \n",word);
  return 0;

}
int lookup(const struct entry dictionary[],const char search[],const int entries)
{
  int i;
  for(i=0;i<entries;++i)
    if(equalStrings(search,dictionary[i].word))
      return i;
  return -1;
}
bool equalStrings (const char s1[], const char s2[])
{
  int i=0;
  bool areEqual;

  //the reason why they are not checking the length of the strings is
  //it might take less time to compute whether they are equal or not
  //rather than finding the length of both the character arrays

  while ( s1[i] == s2 [i] && s1[i] != '\0' && s2[i] != '\0' )
          ++i;
  if ( s1[i] == '\0' && s2[i] == '\0' )
          areEqual = true;
  else
      areEqual = false;

  return areEqual;
}
