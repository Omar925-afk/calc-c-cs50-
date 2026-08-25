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

       string answer2 = get_string("ARE U SURE? ");


	   if (answer2 == 'y' || answer2 == 'Y')
         {
	      printf("you are accepted\n");
	   }

  else if (c == 'n' || c == 'N')
  {
	printf("you disagreed\n");
  }
  else
  {
	printf("invalid input\n");

  }

             int x = get_int("enter x ");
			 int y= 4;
  		if (x > y)
		{
			printf("x is greater than y\n");


}

}

