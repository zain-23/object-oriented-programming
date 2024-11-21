#include <iostream>
#include <string>

using namespace std;

int main()
{
    class Car
    {
    public:
        string brand;
        string model;
        int year;
    };

    Car obj1;
    obj1.brand = "Suzuki";
    obj1.model = "VXR";
    obj1.year = 2024;

    cout << obj1.brand << endl;
    cout << obj1.model << endl;
    cout << obj1.year << endl;
    return 0;
}