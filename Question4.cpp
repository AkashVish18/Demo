#include <iostream>
using namespace std;

int main() {
    int experience;
    int salary;
    int  rank;

    cout << "Enter years of experience: ";
    cin >> experience;
    cout << "Enter salary: ";
    cin >> salary;
    cout << "Enter rank: ";
    cin >> rank;

    
    if (experience >= 10 || salary >= 50000 || rank >= 10)
    {
        cout << "You are in top management" << endl;
    } 
    else 
    {
        cout << "You are not in top management" << endl;
    }

    return 0;
}