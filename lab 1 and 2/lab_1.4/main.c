/*
 *
 *
        Author    : Eslam Yasser
        program   : 4- C Program to add two integers
        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("Enter Two integers to get sum of them\n");
    signed int a,b;
    printf("Enter the First number\n");
        scanf("%d",&a); //3
    printf("Enter the second number\n");
        scanf("%d",&b); //27
    printf("the Sum of them is : %d \n", a+b); //30
    fflush(stdin);
    return 0;
}
