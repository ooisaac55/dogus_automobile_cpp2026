#ifndef ELECTRICCAR_H
#define ELECTRICCAR_H

#include "Automobile.h"

class ElectricCar : public Automobile
{
public:
    void inputCar() override
    {
        Automobile::inputCar();

        engineType = "Electric";
    }

    void printInfo() override
    {
        Automobile::printInfo();
    }
};

#endif