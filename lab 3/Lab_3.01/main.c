
/*
 *
 *
        Author    : Eslam Yasser
        program   : 1- C Program to take an array elements from user, then print them out "using 2 for loops". (Print Array)
        Modified  : 05 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>
#define INIT 0
#define Lenth 5
int main()
{
    printf("Hello enter the\n");
    //array of zeros
    int arr[5] = {INIT};

    //Due to arrays are once created once Never Changed so override on element every round by scanf();
    for(int i=0; i < Lenth;i++){
        printf("Enter the number to be the %d element\n",i+1);
        scanf("%d",&arr[i]);
    }

    //this for print array elements one by one
    int j = INIT;
    while(j < Lenth){
        printf("\nElement Number %d is : %d \n",j+1,arr[j]);
        j++;
    };
    return 0;
}
