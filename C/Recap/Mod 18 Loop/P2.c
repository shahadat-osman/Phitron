#include<stdio.h>
#include<string.h>

int main()
{
    char name[]="shahadat";
    char name2[]="Osman";

    printf("%d\n", strcmp(name,name2));         //case sensitivity
    printf("%d\n", strcasecmp(name,name2));     // not case sensitivity
    strncpy(name, name2, 6);
    puts(name);
    
    //name[3]='\0';
    //strchr(name, 'c');
    //strrchr(name, 'c');
    //strcmp(name, name2);
    //strncmp(name, name2, 4);
    //strcasecmp(name, name2);
    //strcat(name, name2);
    //strncat(name, name2, 4);
    //strcpy(name, name2);
    //strlen(name);
    //strnlen(name, 25);
}