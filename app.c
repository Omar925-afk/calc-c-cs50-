#include <stdio.h>
#include <cs50.h>
int main(void)
{

     int x = get_int("x: ");
     int y = get_int("y: ");

       int answer = get_int("answer:, x+y or x*y: ");

       if (x + y == answer)
       {

     printf("%i\n", x + y);

       }

            if (x * y == answer)
       {

     printf("%i\n", x * y);

       }


}

