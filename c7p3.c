#include <stdio.h>
int main (void)
{
  int ratingCounters[11],i,response,numResponses;
  printf("Enter number of responses : ");
  scanf("%d",&numResponses);
  for(i=0;i<11;i++)
    ratingCounters[i]=0;
  for(i=1;i<=numResponses;++i)
    {
      scanf("%i",&response);
      if(response<1 || response>10)
        printf("Invalid response : %d \n",response);
      else
        ++ratingCounters[response];
      if(response==999)
        break;
    }
  printf("\n\nRating    Number of responses\n");
  printf("--------      ------------------- \n");

  for(i=1;i<11;i++)
    printf("%4i%14i \n",i,ratingCounters[i]);
  return 0;
}
