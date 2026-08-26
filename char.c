#include <stdio.h>
#include <cs50.h>
int main(void)

    {

          char answer = get_char("do youagree ? (y/n): ");


           if (answer =='y' || answer == 'Y')


             {


                  printf ("you agreed\n");





             }


             else if (answer == 'n' ||  answer == 'N')

             {

                  printf ("you disagreed\n");


    }
}