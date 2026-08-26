#include <stdio.h>
#include <cs50.h>
int main(void)

{


          string name = get_string("what is ur name? ");

       int x= get_int("enter a number: ");
       int y= get_int("enter another number: ");
       char operation = get_char("enter an operation (+, -, *, /): ");
        if (operation == '+')
        {

              printf("%i\n", x+y);



        }
              else if (operation == '-')

              {

                      printf("%i\n", x-y);



              }
                 else if (operation == '*')


                 {


                          printf("%i\n", x*y);



                 }



                      else if (operation == '/')

                      {

                              printf("%f\n",(float) x/y);
}

           

}