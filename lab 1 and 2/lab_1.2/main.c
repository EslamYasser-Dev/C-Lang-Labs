/*
 *
 *
        Author    : Eslam Yasser
        program   : 2- C Program to print ASCII number of a given char
        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).
    - We declared two numbers a, b values will add by user we used it in all qusetions

*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter a Character to print ASCII number of it \n");
    signed char asciCode;
        scanf("%c",&asciCode);  //  try "s"
    printf("this is an asci code : %d \n",asciCode);//  115
    fflush(stdin); //clears buffer
    return 0;
}
