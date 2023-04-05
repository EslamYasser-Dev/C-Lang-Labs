/*
 *
 *
        Author    : Eslam Yasser
        program   : 8- C Program to Find the Largest Number Among Three Numbers
        Modified  : 04 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Enter three Number to get the Max of them\n ");
    int a,b,c;
    printf("Enter The First Number\n");
    scanf("%d",&a);
    printf("Enter The Second Number\n");
    scanf("%d",&b);
    printf("Enter The third Number\n");

    scanf("%d",&c);
    int max;
    for(int i=0; i<5; i++)
    {
        if(max<a && max<b && max < c)
        {
            max = a;
        }
        if(max<b && max<c)
        {
            max = b;
        }
        if(max<c)
        {
            max= c;
        }
        else
        {
            printf("\n Max number is = %d",max);
        }
        return 0;
    }
}
