#ifndef INTERNALCOMBUSTIONCAR_H
#define INTERNALCOMBUSTIONCAR_H

#include "Automobile.h"

class InternalCombustionCar : public Automobile
{
public:
    void inputCar() override
    {
        Automobile::inputCar();

        cout << "Enter Engine Type (petrol/diesel/gas): ";
        getline(cin, engineType);
    }

    void printInfo() override
    {
        Automobile::printInfo();
    }
};

#endif