#include<bits/stdc++.h>
using namespace std;

int  main()
{
    cout<<"Enter any no. : ";
    int n;
    cin>>n;
    cout<<IsPalindrom(n);
}
bool IsPalindrom(int n)
{
    int n2=n;
    int newnum=0;
    while(n)
    {
        int r=n%10;
        newnum=newnum*10+r;
        n= n/10;

    }
    if (newnum==n2)
    {
        return true;
    }
    return false;

}