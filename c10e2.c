#include<stdio.h>
int stringLength(const char[]);
int main(void)
{
  const char word1[]={'a','s','t','e','r','\0'};
  const char word2[]={'a','t','\0'};
  const char word3[]={'a','w','e','\0'};

  printf("word 1 length %d\n",stringLength(word1));
  printf("word 2 length %d\n",stringLength(word2));
  printf("word 3 length %d\n",stringLength(word3));

  return 0;
}
int stringLength(const char a[])
{
  int length=0;
  while(a[length]!='\0')
    {
      length++;
    }
  return length;
}
