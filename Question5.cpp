#include <iostream>
using namespace std;

int main() {
    int y;
    int x;
    int z;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "Enter the value of z: ";
    cin >> z;

    if (x >= 20 && z < 100) 
    {
        z += 200; 
    }
    if (x >= 10 || y < 50)
    {
        z += 100; 
    }
    cout << "The final value of z is: " << z << endl;

    return 0;
}