/*
 *
 *
        Author    : Eslam Yasser
        program   : 11- Receive numbers from the user, and exit when the sum exceeds 100.
        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).

*/
#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100

int main()
{
     int x,y, result;
    printf("Enter the First Number: \n");
    scanf("%d",&x);
    printf("Enter the Second Number: \n");
    scanf("%d",&y);
    result = x + y;
    if(result>=LIMIT){
        printf("Result Is Too Big!! the Program will exit");
    }else{
        printf("the result of sum is : %d",result);
    }

    return 0;
}
