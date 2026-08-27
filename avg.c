#include <stdio.h>
#include <cs50.h>
int main (void)
{

  int score[3];

  for(int i=0; i<3; i++)
    {
        score[i] =get_int("score: :");


    }

           printf("averge is %0.2f ", (float) (score[1] + score[2]+score[3] ) /3 );


}