#include <stdio.h>
#include <cs50.h>
int main(void)
{

  string answer = get_string("what is ur name? ");


  printf("Hello, %s\n", answer );

  char c =get_char(" do u agree? ");

  if (c == 'y' || c == 'Y')
  {
	printf("you agreed\n");
  }
  else if (c == 'n' || c == 'N')
  {
	printf("you disagreed\n");
  }
  else
  {
	printf("invalid input\n");

  }

             


}