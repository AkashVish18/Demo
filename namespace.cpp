#include <bits/stdc++.h>
using namespace std;

namespace Hello
{
    string H="hi";
}

namespace hi
{
    string H="hello";
}


int main  ()
{
    int n;
    cout<<hi::H;
    cout<<Hello::H;
}