#include "Automobile.h"
#include "InternalCombustionCar.h"
#include "ElectricCar.h"

int main()
{
    Automobile* cars[CARS_LIMIT];

    int choice;

    do
    {
        cout << "\n====================================" << endl;
        cout << " Welcome to Dogus Car Company" << endl;
        cout << "====================================" << endl;

        cout << "1. Input Car" << endl;
        cout << "2. Display All Cars" << endl;
        cout << "3. Display Specific Cars" << endl;
        cout << "4. Update Car Note" << endl;
        cout << "5. Display Cars Registered By Employee" << endl;
        cout << "6. Display Cars With Notes" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter Choice: ";
        cin >> choice;

        try
        {
            if (choice == 1)
            {
                if (Automobile::countCars >= CARS_LIMIT)
                {
                    throw "Storage Full!";
                }

                int type;

                cout << "\n1. Internal Combustion Car" << endl;
                cout << "2. Electric Car" << endl;
                cout << "Choose Car Type: ";
                cin >> type;

                if (type == 1)
                {
                    cars[Automobile::countCars] =
                        new InternalCombustionCar();
                }
                else
                {
                    cars[Automobile::countCars] =
                        new ElectricCar();
                }

                cars[Automobile::countCars]->inputCar();
            }

            else if (choice == 2)
            {
                if (Automobile::countCars == 0)
                {
                    cout << "No Cars Available!" << endl;
                }
                else
                {
                    cout << endl;

                    for (int i = 0;
                         i < Automobile::countCars;
                         i++)
                    {
                        cars[i]->printInfo();
                    }
            
                }
            }
            //SEARCH/FILTER USING GETTERS
            else if(choice == 3){
                
                int option;

                cout << "\nDisplay By:" << endl;
                cout << "1. Color" << endl;
                cout << "2. Gear Type" << endl;
                cout << "3. Brand" << endl;
                cout << "4. Mileage Above" << endl;
                cout << "5. Mileage Below" << endl;
                cout << "6. Year Above" << endl;
                cout << "7. Year Below" << endl;
                cout << "8. Engine Type" << endl;

                cout << "Enter Option: ";
                cin >> option;

                cin.ignore();

                if(option == 1)
                {
                    string color;

                    cout << "Enter Color: ";
                    getline(cin, color);

                    for(int i = 0; i < Automobile::countCars; i++)
                    {
                        if(cars[i]->getColor() == color)
                        {
                            cars[i]->printInfo();
                        }
                    }
                }

                else if(option == 2)
                {
                    string gear;

                    cout << "Enter Gear Type: ";
                    getline(cin, gear);

                    for(int i = 0; i < Automobile::countCars; i++)
                    {
                        if(cars[i]->getGearType() == gear)
                        {
                            cars[i]->printInfo();
                        }
                    }
                }

                else if(option == 3)
                {
                    string brand;

                    cout << "Enter Brand: ";
                    getline(cin, brand);

                    for(int i = 0; i < Automobile::countCars; i++)
                    {
                        if(cars[i]->getBrand() == brand)
                        {
                            cars[i]->printInfo();
                        }
                    }
                }

                else if(option == 4)
                {
                    int mileage;

                    cout << "Enter Mileage: ";
                    cin >> mileage;

                    for(int i = 0; i < Automobile::countCars; i++)
                    {
                        if(cars[i]->getMileage() > mileage)
                        {
                            cars[i]->printInfo();
                        }
                    }
                }

                else if(option == 5)
                {
                    int mileage;

                    cout << "Enter Mileage: ";
                    cin >> mileage;

                    for(int i = 0; i < Automobile::countCars; i++)
                    {
                        if(cars[i]->getMileage() < mileage)
                        {
                            cars[i]->printInfo();
                        }
                    }
                }

                else if(option == 6)
                {
                    int year;

                    cout << "Enter Year: ";
                    cin >> year;

                    for(int i = 0; i < Automobile::countCars; i++)
                    {
                        if(cars[i]->getYear() > year)
                        {
                            cars[i]->printInfo();
                        }
                    }
                }

                else if(option == 7)
                {
                    int year;

                    cout << "Enter Year: ";
                    cin >> year;

                    for(int i = 0; i < Automobile::countCars; i++)
                    {
                        if(cars[i]->getYear() < year)
                        {
                            cars[i]->printInfo();
                        }
                    }
                }

                else if(option == 8)
                {
                    string engine;

                    cout << "Enter Engine Type: ";
                    getline(cin, engine);

                    for(int i = 0; i < Automobile::countCars; i++)
                    {
                        if(cars[i]->getEngineType() == engine)
                        {
                            cars[i]->printInfo();
                        }
                    }
                }
            }
           // UPDATE NOTES USING SETTER
            else if(choice == 4){

                string brand;

                cin.ignore();

                cout << "Enter Brand To Update Note: ";
                getline(cin, brand);

                bool found = false;

                for(int i = 0; i < Automobile::countCars; i++)
                {
                    if(cars[i]->getBrand() == brand)
                    {
                        string newNote;

                        cout << "Enter New Note: ";
                        getline(cin, newNote);

                        cars[i]->setNote(newNote);

                        cout << "Note Updated Successfully!"
                            << endl;

                        found = true;
                    }
                }

                if(!found)
                {
                    cout << "Car Not Found!" << endl;
                }
            }

            //GET CARS BY EMPLOYEE

            else if(choice == 5){
                string employee;

                cin.ignore();

                cout << "Enter Employee Name: ";
                getline(cin, employee);

                for(int i = 0; i < Automobile::countCars; i++)
                {
                    if(cars[i]->getEmployee() == employee)
                    {
                        cars[i]->printInfo();
                    }
                }
            }
            else if(choice == 6){
                for(int i = 0; i < Automobile::countCars; i++)
                {
                    if(cars[i]->getNote() != "")
                    {
                        cars[i]->printInfo();
                    }
                }
            }

            else if (choice == 0)
            {
                cout << "Program Closed Successfully!"
                     << endl;
            }

            else
            {
        cout << "Invalid Choice!" << endl;}
        }

        catch (const char* error)
        {
            cout << "Exception: "
                 << error
                 << endl;
        }

    } while (choice != 0);

    // Free memory
    for (int i = 0;
         i < Automobile::countCars;
         i++)
    {
        delete cars[i];
    }

    return 0;
}