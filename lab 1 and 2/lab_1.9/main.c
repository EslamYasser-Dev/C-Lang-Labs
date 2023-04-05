/*
 *
 *
        Author    : Eslam Yasser
        program   : 9- C Program to Generate Multiplication Table "1*3=3, 2*3=6, ..."
        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
     printf("Enter a Number to Generate Multiplication Table\n");
    int x;
    scanf("%d",&x);
    printf("Multiplication Table of ------ %d ----- \n",x);
        for(int i=0;i<=12;i++){
            printf("\n %d * %d = %d \n",i,x,i*x);
        }
    return 0;
}
