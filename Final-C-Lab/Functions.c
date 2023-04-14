#include <stdio.h>
#include <stdlib.h>
#include "MyStrings.h"
#define STRING_LENGTH 50
///1- Write a function to reverse a string by passing it to a function without using strrev function.

void RevresStr(void)
{
    unsigned char str[STRING_LENGTH], revstr[STRING_LENGTH];
    printf("Enter The string to reverse : ");
    fflush(stdin);
    scanf("%s", str);
    unsigned short start = 0,realLength = 0;


    while(str[realLength] !='\0')    // to get the length of srting
    {
        realLength++;
    }

    while(realLength > 0)   // to cpoy revesvly
    {
        revstr[start] = str[realLength-1];
        start++;
        realLength--;
    }

    printf("    You have Entered : %s \n    The Reversed Sting Is : %s ",str, revstr);
}

///2- Write a function to concatenate two strings without using strcat function.

void ConCat(void)
{
    unsigned char str1[STRING_LENGTH], str2[STRING_LENGTH];
    printf("Enter The first string : \n");
    fflush(stdin);
    scanf("%s",str1);

    printf("\nEnter The first string : \n");
    scanf("%s",str2);


    printf("Here is concated Text : \n %s  %s \n",str1,str2);
}

///Write a function to  swap two numbers in c without using third variable(2 Methods).

void swapp1(int* a, int* b)
{
    *a += *b;
    *b = *a - *b; //== (a+b) - b = a
    *a = *a - *b; //==(a+b)-a = b     ^_^
}

void swapp2(int* a, int* b){
    (*a) = (*a) * (*b);
    (*b) = (*a) / (*b);
    (*a) = (*a) / (*b);
    }

///5- C Function to store information (name, id and grade) for 10 students in array of structures using pointers and
///another function to print all the structures using pointers.

stdAdd(Student std[STR_LENGTH]){
for(int = 0; i < n; i++){
    std[i]={scanf("%s \n",name) scanf("%d",&id), scanf("%d",&grade)};
}
}

