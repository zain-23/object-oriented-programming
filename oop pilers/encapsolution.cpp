#include <iostream>

using namespace std;

class Employee
{
private:
    int salary;

public:
    // Setter
    void setSalary(int s)
    {
        salary = s;
    }
    // Getter
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Employee employee;
    employee.setSalary(5);
    cout << employee.getSalary();
    return 0;
}