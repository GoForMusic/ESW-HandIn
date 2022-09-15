#pragma once
#include <stdio.h>

typedef struct Person
{
    char* name;
    int age;
}Person;

void Person_create(Person* person);
void Person_showDetails(void);
void Person_die(void);
