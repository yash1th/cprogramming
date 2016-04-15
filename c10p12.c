#include<stdio.h>
#include<math.h>
void strToFloat(char string[]);
int main(void)
{
  strToFloat("-867.6921");
  return 0;
}
void strToFloat(char string[])
{
  int intValue=0,count=0;
  int result=0,result2=0;
  int i=0;

  //for negative decimals
  if(string[i]=='-')
  {
      i=1;
      while(string[i]!='.')
      {
        if(string[i] >= '0' && string[i] <= '9')
        {
            intValue = '0'-string[i];
            printf("intvalue = %i\n",intValue);
            result = result * 10 + intValue;
            printf("result = %i\n",result);
        }
        i++;
      }
      i=i+1;
      while(string[i]!='\0')
        {
          if (string[i] >= '0' && string[i] <= '9')
            {
                intValue = '0'-string[i];
                printf("intvalue = %i\n",intValue);
                result2 = result2 * 10 + intValue;
                printf("result = %i\n",result2);
                count++;
            }
          i++;
        }
      printf("count = %i\n",count);
      float result3;
      result3=(float)result2*pow(0.1,(float)count);
      printf("result 3 : %f\n",result3);
      result3=result+result3;
      printf("\n\nFloat : %.4f \n\n",result3);
  }

  //For positive decimals
  else
  {
      while(string[i]!='.')
      {
        if(string[i] >= '0' && string[i] <= '9')
          {
                intValue = string[i] - '0';
                printf("intvalue = %i\n",intValue);
                result = result * 10 + intValue;
                printf("result = %i\n",result);
                ++i;
          }
      }
      i=i+1;
      while(string[i]!='\0')
      {
        if(string[i] >= '0' && string[i] <= '9')
          {
                intValue = string[i] - '0';
                printf("intvalue2 = %i\n",intValue);
                result2 = result2 * 10 + intValue;
                printf("result2 = %i\n",result);
                count++;
          }
        i++;
      }
      printf("count = %i\n",count);
      float result3;
      result3=(float)result2*pow(0.1,(float)count);
      printf("result 3 : %f\n",result3);
      result3=result+result3;
      printf("\n\nFloat : %.4f \n\n",result3);
    }
}
