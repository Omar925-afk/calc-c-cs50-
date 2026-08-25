#include <stdio.h>
#include <cs50.h>
int main(void)
{

     string answer = get_string("what is ur name? ");


    	 printf("Hello, %s\n", answer );


		 int x=get_int("enter a number: ");
         int y=4;

       if (x<y)

	   {

           prrintf("x is less than y\n");



	   }





	    else if (x>y)
		{




			printf("x is greater than y\n");

		}

		else
		{
			printf("x is equal to y\n");
		}

}
