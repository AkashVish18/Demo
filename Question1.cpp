#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Question 1
    for (int i=1 ; i<=10 ; i++)
    {
        if(5<i)
        {
            break;
        }
        cout <<i<<endl;
        
    }
    //Question 2
    cout <<"skiping 5 no."<<endl;
    for (int i=1 ; i<=10 ; i++)
    {
        if(5>=i)
        {
            continue;
        }
        cout <<i<<endl;
        
    }
    //Question3
    cout<<"Nested loop for skiping no. "<<endl;
    for (int i=1;i<=3;i++)
    {
        cout<<"element "<<i<<" -> " ;
        for (int j=1;j<=5;j++)
        {
            if(j>3)
            {
                break;
            }
            cout<<j<<" ";
        }
    }
    cout<<endl;
 //Question4
    cout<<" Question4 Nested loop for skiping no. "<<endl;
    for (int i=1;i<=3;i++)
    {
        cout<<"element "<<i<<" -> " ;
        for (int j=1;j<=5;j++)
        {
            if(j<=3)
            {
                continue;
            }
            cout<<j<<" ";
        }
    }
}