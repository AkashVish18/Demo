#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    if (x >= 59 && y >= 10)
    {
        cout << "X is greater than or equal to 59 and y is greater than or equal to 10" << endl;
    } 
    else if (x >= 50 && y < 10) 
    {
        cout << "X is greater than or equal to 50 and y is less than 10" << endl;
    } 
    else 
    {
        cout << "None of the condition matches" << endl;
    }

    return 0;
}