#pragma once
#include <stdbool.h>
#include "Person.h"

typedef struct Car
{
    char* name;
    double health;
    int noDoor;
    Person* person;
    
}Car;


void Car_create(Car* car);
void Car_buyer(Person* person);
void Car_getDamange(double amount);
void Car_showHealth(void);
bool Car_isDestroyed(void);
