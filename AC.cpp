#include<bits/stdc++.h>
using namespace std;
struct AirConditioner{
    string Brand;
    string EnergyRating;
    string type;
    string technology;
    float rating;
    string Price;

};

void ACFeature(AirConditioner AC)
{
    cout<<"Brand : "<<AC.Brand<<endl;
    cout<<"Energy Rating : "<<AC.EnergyRating<<endl;
    cout<<"Type : "<<AC.type<<endl;
    cout<<"Technology : "<<AC.technology<<endl;
    cout<<"Rating : "<<AC.rating<<endl;
    cout<<"price : "<<AC.Price<<endl;
}

int main()
{
    AirConditioner AC;
    AC.Brand="LG";
    AC.EnergyRating="5star";
    AC.type="Split";
    AC.technology="AI Flexicool Inverter";
    AC.rating=5.6;
    AC.Price="$ 10000";

    ACFeature(AC);
}