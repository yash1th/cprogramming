#include <stdio.h>
#include <stdbool.h>
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
int main (void) {
  bool equalStrings (const char s1[], const char s2[]);
  const char stra[] = "string compare test";
  const char strb[] = "string";
  printf ("%i\n", equalStrings (stra, strb));
  printf ("%i\n", equalStrings (stra, stra));
  printf ("%i\n", equalStrings (strb, "string"));
  printf ("%i\n", equalStrings (stra, "string compare Test"));

  return 0;
}
