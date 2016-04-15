/* #include<stdio.h>
void charCount(char a[]);
struct charFrequency
{
  char c;
  int count;
};
int main(void)
{
  charCount("success");
  return 0;
}
void charCount(char a[])
{
  int i=0,j;
  struct charFrequency letter[10];
  for(i=0;i<10;i++)
  {
    letter[i].c='\'';
    letter[i].count=0;
  }
  while(a[i]!='\0')
    {
      for(j=0;j<10;j++)
        {
          if(a[i]==letter[j].c)
              letter[j].count++;
          else
              {
                letter[j].c=a[i];
                letter[j].count=1;
              }
        }
    }
  for(i=0;i<10;i++)
    printf("frequency of %c = %d\n",letter[i].c,letter[i].count);
}
*/

#include <stdio.h>
#include <string.h>

int main()
{
   char string[100];
   int c = 0, count[26] = {0};

   printf("Enter a string\n");
   gets(string);

   while (string[c] != '\0')
   {
      /** Considering characters from 'a' to 'z' only
          and ignoring others */

      if (string[c] >= 'a' && string[c] <= 'z')
         count[string[c]-'a']++;

      c++;
   }

   for (c = 0; c < 26; c++)
   {
      /** Printing only those characters
          whose count is at least 1 */

      if (count[c] != 0)
         printf("%c occurs %d times in the entered string.\n",c+'a',count[c]);
   }

   return 0;
}
