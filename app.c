#include<stdio.h>
#include<cs50.h>
int main(void)
{
    // Prompt user for input
    string name = get_string("What is your name? ");

    // Print greeting
    printf("Hello, %s!\n", name);

  long x=get_int(" x ");
  long y=get_int(" y ");
   char operaction=get_char("operation (+,-,*,/): ");

         if(operaction=='+')


          {

            printf("%ld",x+y);


          }

          else if(operaction=='-')
         {
            printf("%ld",x-y);

          }



          else if(operaction=='*')
         {
            printf("%ld",x*y);
         }

          else if(operaction=='/')
         {
            printf("%ld",x/y);
         }

          else
         {
            printf("Invalid operation");
         }
        }