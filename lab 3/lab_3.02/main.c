/*
 *
 *
        Author    : Eslam Yasser
        program   : 2- C Program to find the minimum & maximum value of array elements. (Min_Max Array)
        Modified  : 05 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>
#define LENGTH 8


int main()
{
    printf("find the minimum & maximum value of array elements\n");
    int max,min;
    int arr[LENGTH] = {214,700,656,984,570,542,544,142};
    max = arr[0];
    min = arr[0];

    for(int i = 0; i<LENGTH; i++)
    {
        //check if current value is max
        if(max <= arr[i])
        {
            max = arr[i];
        }
    //check if current value is min
        if(min >= arr[i])
        {
            min = arr[i];
        }
    }
    printf("the maximum value is :  %d \n",max);
    printf("the Minimum value is :  %d \n",min);
    return 0;
}
