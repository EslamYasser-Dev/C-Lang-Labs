/*
 *
 *
        Author    : Eslam Yasser
        program   : 3- C Program to print a float number entered by the user
        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter s to print it in a float \n");
    float number;
    scanf("%f",&number); //22.154
    printf("this is a Float value that you have entered :  %f \n",number); //22.154
    fflush(stdin);
    return 0;
}
