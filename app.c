#include <stdio.h>
#include <cs50.h>
int main(void)

{

       int x= get_int("enter a number: ");
       int y= get_int("enter another number: ");
       int z= x+y;
       printf("the sum of %i and %i is %i\n", x, y, z);

}