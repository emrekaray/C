#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
        int count;
        char name[20];
    }student;

    int main()
    {
        student *p;
        p = (student*) malloc(sizeof(student));
        char input_name[20];
        gets(input_name);
        strcpy(p->name, input_name);
        printf("%s", p->name);
       return 0;
    }
