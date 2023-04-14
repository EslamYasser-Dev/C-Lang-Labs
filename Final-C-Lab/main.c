#include "MyStrings.h"

int main()
{
Student stdx[10];

    printf("Hello ..\n Type anything else to quit \n Choose form 1 to 6 where \n 1 = Reverse \n 2 = Concat, \n 3 = Swap two num \n");
    scanf("%d",&selector);
    switch(selector)
    {
        case 1:RevresStr();
        break;
        case 2:ConCat();
        break;
        case 3:swapp1();
        break;
        case 4:swapp2();
        break;
        case 5:stdAdd(Student stdx[]);
        break;
        case 6:stdShow(Student stdx[]);
        break;
        default:printf("Ouitting ....");
    }
    return 0;
}
