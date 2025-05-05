#include <bits/stdc++.h>
using namespace std;

struct SoundSys{
    int NumberOfSpeaker;
    string SoundPower;
};

struct SmartFeature{
    string BackCamera;
    string display;
    string autopilot;
    SoundSys spreaker;
};

struct Enginetype{
    string layout;
    string fluetype;
};

struct Car{
    string Brand;
    string Name;
       int AirBags;
    string Model;
    string color;
    string MiLeage ;
    string Price ;

    Enginetype Engine;
    SmartFeature feature;

};
void carFeature(Car car1){
    cout<<"Car Brand : "<<car1.Brand<<endl;
    cout<<"Car name : "<<car1.Name<<endl;
    cout<<"Number of airbags : "<<car1.AirBags<<endl;
    cout<<"Car model : "<<car1.Model<<endl;
    cout<<"Car color : "<<car1.color<<endl;
    cout<<"Mileage : "<<car1.MiLeage<<endl;
    cout<<"Price : "<< car1.Price<<endl;
    cout<<"Engine Layout : "<<car1.Engine.layout<<endl;
    cout<<"Flue type : "<<car1.Engine.fluetype<<endl;
    cout<<"Back camera Hai ? : "<<car1.feature.BackCamera<<endl;
    cout<<"display size : "<<car1.feature.display<<endl;
    cout<<"Autopilot Hai? : "<<car1.feature.autopilot<<endl;
    cout<<"Number of speakers : "<<car1.feature.spreaker.NumberOfSpeaker<<endl;
    cout<<"Sound : "<<car1.feature.spreaker.SoundPower<<endl;



}

int main()
{
    Car  car1;
    car1.Brand="Rolls Royce";
    car1.Name ="Rolls-Royce La Rose Noire Droptaila";
    car1.AirBags=6;
    car1.Model="Roadster";
    car1.color="Black and Red";
    car1.MiLeage="100km";
    car1.Price="250Cr";
    car1.Engine.layout="V12 engine";
    car1.Engine.fluetype="Deisel";
    car1.feature.BackCamera="Yes";
    car1.feature.display="15 inch";
    car1.feature.autopilot="Yes";
    car1.feature.spreaker.NumberOfSpeaker=4;
    car1.feature.spreaker.SoundPower="80db";

    carFeature(car1);

}
