/*
 *
 *
        Author    : Eslam Yasser
        program   : 12- Write a C program to print the multiplication table in ascending order from table 1 to table 10 sequentially and separated by group of " *'s ".

        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).

*/
#include <stdio.h>
#include <stdlib.h>


int main()
{
    //loop to increase the i number repeat the whole operation.
    for(int i=0 ; i <= 10; i++)
    {
        printf("----------------%d----------------\n",i);//separator
        //Nest loop that increase j in every round and print J*I.
        for(int j=0; j<= 10; j++)
        {
            printf("\t %d * %d = %d \n",i,j,i*j);
        }
    }
    return 0;
}
