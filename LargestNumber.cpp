#include<iostream>
using namespace std;
 
int LargestNum(int arr1[] , int n)
{
            int max = arr1[0];
            for(int i = 1 ; i < n; i++){
                if(arr1[i] > max){
                    max = arr1[i];
                }
            }
            return max;
}
int main()
{ 
    cout <<"Enter the array size :";
    int n;
    cin>>n;
    int arr[n];
    for (int i =0;i<n;i++)
    {
        cin>>arr[i];//awaz nhi aa rhi hai
    }
    
    cout<<"Largest No. : "<<LargestNum(arr,n)<<endl;
    return 0;

}
