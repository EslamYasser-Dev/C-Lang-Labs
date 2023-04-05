/*
 *
 *
        Author    : Eslam Yasser
        program   : 10- C Program to Check Whether a Character is an Alphabet or not
        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed char alphabet;
    printf("Enter a value to Check Whether a Character is an Alphabet or not\n");
    scanf("%c", &alphabet);
    if((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')){
        printf("\n %c is An Alphabet",alphabet);
    }else{
        printf("\n %c is Not An Alphabet",alphabet);
    }
    return 0;
}
