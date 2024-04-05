#include <stdio.h>
#include <string.h>
#include "functions.h"
#define text "Bus_Database.txt"

// This section is for viewing existing data

void view()
{
    printf("\n");
    FILE* file;
    file = fopen(text,"r");
    char c;
    while((c = fgetc(file)) != EOF)
        printf("%c",c);
    fclose(file);
    return;
}

// This section is for adding extra data

void write(struct bus_info finfo)
{
    printf("\n");

    char name[15];
    char bus_id[15];
    char destination[15];
    char departure_date[15];

    printf("Enter bus name : ");
    scanf(" %s",name);
    strcpy(finfo.name,name);
    printf("\n");

    printf("Enter bus id : ");
    scanf("%s",bus_id);
    strcpy(finfo.bus_id,bus_id);
    printf("\n");

    printf("Enter travelling destination : ");
    scanf("%s",destination);
    strcpy(finfo.destination,destination);
    printf("\n");

    printf("Enter departure date : ");
    scanf("%s",departure_date);
    strcpy(finfo.departure_date,departure_date);
    printf("\n");

    FILE* file;
    file = fopen(text,"a");
    fprintf(file,"%-15s%-15s%-15s%-15s\n",name,bus_id,destination,departure_date);
    fclose(file);

    return;
}


// This section is for searching existing data

void search()
{
    printf("\n");

    char name[15];
    char a[70];

    printf("Enter the name of the bus you are searching for : ");
    scanf(" %s",name);

    FILE* file;
    file = fopen(text,"r");
    int flag = 1;
    while(!feof(file))
    {
        fgets(a,70,file);
        if(strstr(a,name))
        {
            printf("\n%s's data has been found!\n",name);
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("\n%s's data has not been found :(\n",name);

    return;
}
