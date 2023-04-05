/*
 *
 *
        Author    : Eslam Yasser
        program   : 6 - C Program to make simple calculations (add, sub, multiply, divide) on two integers
        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
     printf("Hello...this is your simple calculator\n");
    signed int a,b,Opreation;
    printf("Enter the first Number:\n");
    scanf("%d",&a);
    printf("Enter the Second Number:\n");
    scanf("%d",&b);
    printf("Now..... Choose one operation you want to do:\n");
    printf("which operation you gonna do\n 1-Add\n 2-Sub.\n 3-multiply\n 4-divide \n");
    scanf("%d",&Opreation);
    switch(Opreation){
        case 1:printf("Adding Result = %d",a+b);
        break;
        case 2:printf("Subtraction Result = %d",a-b);
        break;
        case 3:printf("Multiply Result = %d",a*b);
        break;
        case 4:printf("Divide Result = %d",a/b);
        break;
        default:printf("Bad Entity");
    }
    fflush(stdin);
    return 0;
}
