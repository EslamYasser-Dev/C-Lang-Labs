#include "MyStrings.h"

int main()
{
    printf("Hello ..\n Type anything else to quit \n Choose form 1 to 4 where \n 1 = Reverse \n 2 = Concat, \n 3 = Swap two num \n");
    unsigned int selector;

    scanf("%d",&selector);
    switch(selector)
    {
        case 1:RevresStr();
        break;
        case 2:ConCat();
        break;
        default:printf("Ouitting ....");
    }

    return 0;
}
