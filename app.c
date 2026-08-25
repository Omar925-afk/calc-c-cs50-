#include <stdio.h>
#include <cs50.h>
int main(void)
{

      int x = get_int("x: ");
    int y = get_int("y: ");
    char operation = get_char("Operation (+ or * or /): ");

    if (operation == '+')
    {
        printf("%i\n", x + y);
    }
    else if (operation == '*')
    {
        printf("%i\n", x * y);
    }
    else
    {
        printf("%i\n", x / y);

}
}

