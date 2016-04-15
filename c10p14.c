#include<stdio.h>
void intToStr(int);
int numOfDigits(int);
int makeItPositive(int);
int main(void)
{
  int n;
  printf("enter the number: ");
  scanf("%d",&n);
  intToStr(n);
  return 0;
}
void intToStr(int n)
{
  int temp,digit;
  int length=numOfDigits(n);
  if(n>=0)
    {
      char string[length];
      string[length]='\0';
      temp=n;
      while(temp!=0)
        {
          digit=temp%10;
          string[length-1]=digit+'0';
          //A char in C is already a number (the character's ASCII code), no conversion required.
          //If you want to convert a digit to the corresponding character, you can simply add '0'
          length--;
          temp=temp/10;
        }
        printf("string = %s \n",string);
    }
  else
  {
    char string[length+1];
    string[length+1]='\0';
    string[0]='-';
    temp=makeItPositive(n);
    while(temp!=0&&length!=0)
      {
        digit=temp%10;
        string[length]=digit+'0';
        //A char in C is already a number (the character's ASCII code), no conversion required.
        //If you want to convert a digit to the corresponding character, you can simply add '0'
        length--;
        temp=temp/10;
      }
      printf("string = %s \n",string);
  }

}
int numOfDigits(int n)
{
  int count=0,digit;
  while(n!=0)
    {
      digit=n%10;
      n=n/10;
      count++;
    }
  return count;
}
int makeItPositive(int n)
{
  if(n<0)
    return -n;
  else
    return n;
}
