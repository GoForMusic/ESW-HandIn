#include <time.h>
#include <stdlib.h>

#include "Car.h"

static void _delay(int miliseconds)
{
    long pause;
    clock_t now,then;

    pause = miliseconds * (CLOCKS_PER_SEC/1000);
    now=then=clock();
    while ((now-then)<pause)
    {
        now=clock();
    }
    then=now;
}

static void _initialize(Person* person, Car* car)
{
    person->name="Adrian";
    person->age=24;
    car->health=100.0;
    car->name="Toyota";
    car->noDoor=4;
    Car_create(car);
    Car_buyer(person);
    Person_create(person);
    
}

static void _destroy(Person* person, Car* car)
{
    Person_die();
    free(person);
    free(car);
}

static void _run(void)
{
    Person* person = malloc(sizeof(Person));
    Car* car=malloc(sizeof(Car));
    _initialize(person,car);
    while (1)
    {
        Car_showHealth();
        Car_getDamange(10.0);
        _delay(1000);
        if(Car_isDestroyed()) break;
    }
    _destroy(person,car);
}

int main(void)
{
    _run();
    return 0;
}