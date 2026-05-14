#include "Automobile.h"

int Automobile::countCars = 0;
Automobile::Automobile()
{
    brand = "";
    model = "";
    year = 0;
    color = "";
    mileage = 0;
    gearType = "";
    doors = 0;
    tires = 4;
    employeeName = "";
    note = "";
    condition = "";
}

void Automobile::inputCar(){
    cin.ignore();

    cout << "Enter Car Brand: ";
    getline(cin, brand);

    cout << "Enter Car Model: ";
    getline(cin, model);

    cout << "Enter Car Year: ";
    cin >> year;

    cin.ignore();

    cout << "Enter Condition (new/old): ";
    getline(cin, condition);

    if (condition == "new")
    {
        mileage = 0;
    }
    else
    {
        cout << "Enter Mileage: ";
        cin >> mileage;
        cin.ignore();
    }

    cout << "Enter Color: ";
    getline(cin, color);

    cout << "Enter Gear Type (manual/automatic): ";
    getline(cin, gearType);

    cout << "Enter Number of Doors: ";
    cin >> doors;

    cout << "Enter Number of Tires: ";
    cin >> tires;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, employeeName);

    cout << "Enter Note/Comment: ";
    getline(cin, note);

    countCars++;
};

void Automobile::printInfo()
{
    cout << setw(20) << left << brand
         << setw(20) << model
         << setw(10) << year
         << setw(15) << color
         << setw(15) << mileage
         << setw(15) << gearType
         << setw(10) << doors
         << setw(10) << tires
         << setw(15) << engineType
         << setw(20) << employeeName
         << setw(20) << condition
         << setw(25) << note
         << endl;
}

string Automobile::getColor()
{
    return color;
}

string Automobile::getGearType()
{
    return gearType;
}

string Automobile::getBrand()
{
    return brand;
}

int Automobile::getMileage()
{
    return mileage;
}

int Automobile::getYear()
{
    return year;
}

string Automobile::getEmployee()
{
    return employeeName;
}

string Automobile::getNote()
{
    return note;
}

string Automobile::getEngineType()
{
    return engineType;
}

void Automobile::setNote(string newNote)
{
    note = newNote;
}