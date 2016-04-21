#include<stdio.h>
int main(void)
{
  char *message = "Programming in C is fun\n";
  printf ("Programming in C is fun\n");
  printf ("%s", "Programming in C is fun\n");
  printf ("%s", message);
  printf (message);


  char message2[] = "You said it\n";
  printf ("You said it\n");
  printf ("%s", message2);
  printf (message2);
  printf ("%s", &message2[0]);

  char *format = "x = %i\n";
  printf ("said it\n");
  printf (message2 + 4);
  printf ("%s", message2 + 4);
  printf ("%s", &message2[4]);

  int x = 100;
  printf ("x = %i\n", x);
  printf (format, x);

  return 0;
}
