#include<bits/stdc++.h>
using namespace std;

int* reverseTheArray(int arr[],int n)
{
  int array[n];
  for (int i=0;i<n;i++)
  {
    array[i]=arr[i];
  }
  return :: array;
}
int main()
{   
    cout<<"Enter the size of array: ";
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout << "Enter "<<i+1<<" element :";
        cin>>arr[i];
    }
   int *p=::reverseTheArray(arr,n);
   cout<<"reversed Array"<<endl;
   for (int i=0;i<n;i++)
   {
    cout<<*(p+i)<<" ";
   }
    return 0;
}
