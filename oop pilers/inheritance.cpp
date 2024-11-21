#include <iostream>

using namespace std;
// Base class
class Vehicle
{
public:
    string brand = "Ford";
    void honk()
    {
        cout << "Tuut, tuut! \n";
    }
};
// Derived class
class Car : public Vehicle
{
public:
    string model = "Mustang";
};
// Multi-Level Inheritance
class Model : public Car
{
};

int main()
{
    Car car1;
    Model car2;
    car1.honk();
    // cout << car1.brand << endl;
    // cout << car1.model;
    cout << car2.model;
}