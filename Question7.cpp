#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter any letter : ";

    char gen;
    cin>>gen;
    if (gen=='M' || gen=='m')
    {
        cout<<"You are male";
    }
    else if(gen=='F' || gen=='f')
    {
        cout << "You are female";
    }
    else
    {
        cout<<"Type again";
    }
}