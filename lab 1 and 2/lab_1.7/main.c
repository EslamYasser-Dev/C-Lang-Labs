/*
 *
 *
        Author    : Eslam Yasser
        program   : 7- C Program to compute Quotient and Remainder
        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int a,b,remainder,Quotient;
    printf("enter the two numbers to compute Quotient and Remainder\n");
    printf("enter the big number\n");
    scanf("%d",&a);
    printf("enter the Smaller number\n");
    scanf("%d",&b);

    //check if it can be divided
    if(a>b){
    remainder = a%b;
    Quotient = a/b;
    printf("the Remainder = %d \n wheres the Quotient = %d",remainder,Quotient);
    }else{
    printf("bad Entity you must enter the bigger number frist");
    }
    return 0;
}
