# 🚗 Dogus Car Company Management System

A C++ Object Oriented Programming (OOP) project designed for managing automobile records in a car company system.

This project demonstrates core OOP concepts such as inheritance, polymorphism, encapsulation, virtual functions, pointers, static variables, getters/setters, exception handling, and formatted console output using `iomanip`.

---

# 📌 Project Overview

The system allows employees of Dogus Car Company to:

- Add new cars into the system
- Display all available cars
- Search cars using specific attributes
- Update car notes/comments
- Display cars registered by a specific employee
- Display cars with notes/comments
- Store data permanently using CSV/database-style storage

The system supports:

- Internal Combustion Engine Cars
  - Petrol
  - Diesel
  - Gas
- Electric Cars

---

# 🧠 OOP Concepts Used

This project was developed using the following C++ Object Oriented Programming concepts:

- Classes and Objects
- Inheritance
- Polymorphism
- Virtual Functions
- Encapsulation using private/public access modifiers
- Static Variables
- Pointers
- Getter and Setter Functions
- Arrays
- Functions
- Conditional Statements
- Exception Handling
- `iomanip` library with `setw()`

---

# 🏗 UML Design Idea

## Base Class: `Automobile`

### Attributes

| Attribute | Description |
|---|---|
| Brand | Car brand name |
| Model | Car model |
| Year | Manufacturing year |
| Color | Car color |
| Mileage | Car mileage |
| Gear Type | Manual or Automatic |
| Door Number | Number of doors |
| Tire Number | Number of tires |
| Engine Type | Petrol/Diesel/Gas/Electric |
| Employee Name | Employee who registered the car |
| Note/Comment | Employee note |
| Car Condition | New or Old |

---

## Functions

```cpp
inputCar()
printInfo()
getColor()
getGearType()
getBrand()
getMileage()
getYear()
getEmployee()
getNote()
setNote()