#include<bits/stdc++.h>
using namespace std;
bool isArmstrong(int n)
{
    int n1=n,n2=n;
    int count=0;
    int New=0;

    while(n)
    {
        count++;
        n/=10;
        
    }
    while(n1)
    {
        int r=n1%10;
        New+=pow(r,count);
        n1/=10;
    }

    if (n2==New)
    {
        return true;
    }
    return false;
}
int main()
{
    cout<<"Enter Any Number : ";
    int n;
    cin>>n;
    cout<<isArmstrong(n);
}