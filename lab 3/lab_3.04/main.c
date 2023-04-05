/*
 *
 *
        Author    : Eslam Yasser
        program   : 4- You are given a string s. You need to reverse the string.
                        Input: chars [] = Geeks //Output: skeeG

        Modified  : 05 April 2023

    Notes :
    - this written and tested on Ubuntu Based Linux OS(Unity).


*/
#include <stdio.h>
#include <stdlib.h>
#define length 6

int main()
{
    printf("Reverse strings\n Enter a 10 characters string \n");
    char str[length] = {0};
    char revstr[length] = {0};

     int a = 0;
     int c = length-1;

    scanf("%s",str);
    fflush(stdin);

    //overide revstr[] reversibly
    for(int i = length; i>=0; i--)
    {
        revstr[a] = str[c];
        a++;
        c--;
    }
    printf("%s",revstr);
    return 0;
}
