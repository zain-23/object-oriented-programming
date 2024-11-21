#include <iostream>
#include <string>

using namespace std;

int main()
{
    try
    {
        int age = 15;
        if (age >= 18)
        {
            cout << "Access granted - you are old enough.";
        }
        else
        {
            throw(age);
        }
    }

    /*
        If you don't know throw type in try block
        you can use three dots (...)
    */
    catch (...)
    {
        cout << "Access denied - You must be at least 18 years old.\n";
    }
}