#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "functions.h"
#define text "Bus_Database.txt"

int main()
{
    int flag = 1;
    while(flag)
    {
        struct bus_info finfo;
        int choice = 0;
        printf("\nWelcome to Bus Database System\n");
        printf("Enter your choice ( 1/2/3/4 )\n");
        printf("1) View Bus info\n");
        printf("2) Add new Bus info\n");
        printf("3) Search for a bus info\n");
        printf("4) Exit from Bus Database System\n");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
            view();
            break;
        case 2:
            write(finfo);
            break;
        case 3:
            search();
            break;
        case 4:
            printf("Thanks for visiting Bus Database\n");
            flag = 0;
        default:
            break;
        }
    }

    return 0;
}
