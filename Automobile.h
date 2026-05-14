#ifndef AUTOMOBILE_H
#define AUTOMOBILE_H

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#define CARS_LIMIT 600

class Automobile
{
private:
    string brand;
    string model;
    int year;
    string color;
    int mileage;
    string gearType;
    int doors;
    int tires;
    string employeeName;
    string note;
    string condition;

protected:
    string engineType;

public:
    static int countCars;

    Automobile();

    virtual void inputCar();
    virtual void printInfo();

    // Getters
    string getColor();
    string getGearType();
    string getBrand();
    int getMileage();
    int getYear();
    string getEmployee();
    string getNote();
    string getEngineType();

    // Setter
    void setNote(string newNote);

    virtual ~Automobile() {}
};

#endif