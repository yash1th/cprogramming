#include <stdio.h>
int main (void)
{
  int ratingCounters[11]={0},i,response;

  for(i=1;i<=20;++i)
    {
      scanf("%i",&response);

      if(response<1 || response>10)
        printf("Invalid response : %d \n",response);
      else
        ++ratingCounters[response];
    }
  printf("\n\nRating    Number of responses\n");
  printf("--------      ------------------- \n");

  for(i=1;i<11;i++)
    printf("%4i%14i \n",i,ratingCounters[i]);
  return 0;
}
