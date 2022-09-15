#include "Car.h"

Car* _car;

static void _showCarHealth(void)
{
    printf("%0.2f \n", _car->health);
    if(Car_isDestroyed())
    {
        Person_die();
    }
}

void Car_create(Car* car)
{
    _car=car;
}

void Car_buyer(Person* person)
{
    _car->person=person;
}

void Car_getDamange(double amount)
{
    _car->health -= amount;
}

void Car_showHealth(void)
{
    Person_showDetails();
    _showCarHealth();
}

bool Car_isDestroyed(void)
{
    return _car->health<0.0 ? 1 : 0;
}

