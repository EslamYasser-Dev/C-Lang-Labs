/*
 *
 *
        Author    : Eslam Yasser
        program   : 13- Rewrite the previous program to print them in descending order.

        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).

*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    for(int i=10 ; i >= 0; i--)
    {
        printf("----------------%d----------------\n",i);//separator

        for(int j=10; j>=0; j--)
        {
            printf("%d * %d = %d \n",i,j,i*j);
        }
    }
    return 0;
}
