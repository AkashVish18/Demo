#include<bits/stdc++.h>
using namespace std;
bool isSpy(int n)
{
    int sum=0;
    int product=1;
    while(n)
    {
     int r=n%10;
     sum +=r;
     product *=r;
     n=n/10;
    }
    if(sum ==product)
    {
        return true;
    }
    return false;

}
int main()
{
    cout<<"Enter any Number : ";
    int n;
    cin>>n;
    cout<<isSpy(n);
}