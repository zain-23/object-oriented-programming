#include <iostream>
#include <string>

using namespace std;

// Note: The constructor has the same name as the class, it is always public, and it does not have any return value.

class Car
{
public:
    string brand, model;
    int year;
    Car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};

int main()
{
    Car car1("BMW", "X5", 1999);

    cout << car1.brand << endl;
    cout << car1.model << endl;
    cout << car1.year << endl;
    return 0;
}