#include<stdio.h>
#include<cs50.h>
int main(void)
{
    // Prompt user for input
    string name = get_string("What is your name? ");

    // Print greeting
    printf("Hello, %s\n", name);

  int x=get_int(" x ");
  int y=get_int(" y ");
   char operaction=get_char("operation (+,-,*,/): ");
        float result;
         if(operaction=='+')


          {

             result = x + y;


          }

          else if(operaction=='-')
         {
            result = x - y;

         }



          else if(operaction=='*')
         {
             result = x * y;
         }

          else if(operaction=='/')
         {
             result = x / y;
         }

          else
         {
            printf("Invalid operation");
         }

        }