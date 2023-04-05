/*
 *
 *
        Author    : Eslam Yasser
        program   : 5- Write a C program in C to find the count
                    of the longest consecutive occurrence of a given number in an array. Example:
                    Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3 , result = 4

        Modified  : 05 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[15] = {1,2,2,3,3,3,3,4,4,4,4,4,3,3,3};
    int Number, count=0,i=0;
    printf("Enter the Number: \n");
    scanf("%d",&Number);
    fflush(stdin);
    while(i <= 15){
        if(Number == arr[i] && Number == arr[i++]){
            count++;
        }
    i++;
    }
    printf("\n the longest consecutive occurrence of %d \n is : %d \n",Number, count);
    return 0;
}
