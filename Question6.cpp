#include<iostream>
using namespace std;
int main()
{
    cout<< "Enter Age Of A :";
    int A;
    cin>>A;
    cout<< "Enter Age Of B :";
    int B;
    cin>>B;
    cout<< "Enter Age Of C :";
    int C;
    cin>>C;
    if(A==B && B==C)
    {
        cout<<"All have same Age";
    }


    else if (A==B)
    {
        if (C>A)
        {
            cout<<"C is oldest And A B have same Age ";
        }
        else
        {
            cout<<"A and B have same Age And A and B are old";
        }
        
    }
    else if (B==C)
    {
        if (B<A)
        {
            cout<<"A is oldest And C and B have same Age";
        }
        else
        {
            cout<<"C and B have same Age And C and B are old";
        }
    }
    else if (C==A)
    {
        if (B>A)
        {
            cout<<"B is oldest And A and C have same Age";
        }
        else
        {
            cout<<"C and A have same Age And C and A are old";
        }
    }

    
    else if(A>B && A>C)
    {

        cout<<"A is Oldest";
    }
    else if(B>A && B>C)
    {
        cout<<"B is Oldest";
    }
    else if (C>A && C>B)
    {
        cout<<"C is Oldest";
    }

}