#include<stdio.h>
#include<cs50.h>
int main(void)
{
    // Prompt user for input
    string name = get_string("What is your name? ");

    // Print greeting
    printf("Hello, %s\n", name);

   int x = get_int("x: ");
   int y = get_int("y: ");
   char operation = get_char("operation (+, -, *, /): ");
   float result;

   if (operation == '+')
   {
      result = x + y;
   }
   else if (operation == '-')
   {
      result = x - y;
   }
   else if (operation == '*')
   {
      result = x * y;
   }
   else if (operation == '/')
   {
      if (y == 0)
      {
         printf("Cannot divide by zero.\n");
         return 1;
      }
      result = (float) x / y;
   }
   else
   {
      printf("Invalid operation.\n");
      return 1;
   }

   printf("Result: %.2f\n", result);
}