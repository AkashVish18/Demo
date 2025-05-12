#include <iostream>
using namespace std;

int main() {
    int age;
    int salary;
    int experience;

    cout << "Enter age: ";
    cin >> age;
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter years of experience: ";
    cin >> experience;

    if (age > 60 && salary > 20000 && experience > 20) 
    {
        salary += 5000;
    } 

    else if (age > 40 && salary > 15000 && experience > 10)
    {
        salary += 2000;
    } 

    else if (age > 30 && salary > 10000 && experience > 5) 
    {
        salary += 1000;
    } 

    else {
        salary += 500;
    }
    cout << "final salary is: " << salary << endl;

    return 0;
}