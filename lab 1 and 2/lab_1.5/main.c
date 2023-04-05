/*
 *
 *
        Author    : Eslam Yasser
        program   : 5- C Program to print Hex of a number
        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int Dnumber;
    printf("Enter a Decimal number to print Hex of it\n");
    printf("Enter the Decimal number\n");
    scanf("%d",&Dnumber);
    printf("the Decimal value of %d is \t %X \n",Dnumber,Dnumber);
    fflush(stdin);
    return 0;
}
