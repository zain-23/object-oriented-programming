#include <vector>
#include <iostream>

using namespace std;

int main()
{
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // For Each Lopp
    for (string car : cars)
    {
        cout << car << endl;
    }
}