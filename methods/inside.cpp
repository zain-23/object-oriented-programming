#include <iostream>
#include <string>

using namespace std;

int main()
{
    class Car
    {
    public:
        void myMethod()
        {
            cout << "Hello World";
        }
    };

    Car obj1;
    obj1.myMethod();
    return 0;
}