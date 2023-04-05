/*
 *
 *
        Author    : Eslam Yasser
        program   : 3- Write a program in C to find the second largest element in an array
        Modified  : 05 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 8

int main()
{
    printf("Hello.....find the second largest element in an array\n");
    int arr[LENGTH] = {214,700,656,984,570,542,544,142};

    int a;

// Arrange the Array elements Descending
    for(int i = 0; i<LENGTH; i++)
    {
        for(int j=i+1; j<LENGTH; j++){
         if(arr[i] < arr[j])
        {
            a = arr[i]; // saves i old value
            arr[i] = arr[j]; // arr[i] get next value
            arr[j] = a; //assign a in arr[j]
        }
    }
    }

    printf("Largest Element is : %d \n second one is : %d ",arr[0],arr[1]);
    return 0;
}
