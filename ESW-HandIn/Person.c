#include "Person.h"


Person* _person;

void Person_create(Person* person)
{
    _person=person;
}

void Person_showDetails(void)
{
    printf("Name: %s, his age: %i \n",_person->name,_person->age);
}

void Person_die(void)
{
    printf("%s die in car accident \n",_person->name);
}