#include <bits/stdc++.h>
using namespace std;

// function for Increament
// void IncreamentByTen( int* arr, int size )
// {
//     cout<<"Increament by Ten"<<endl;
//     for (int i=0;i<size;i++)
//     {
        
//         cout <<arr[i]+10<<" ";
//     }
// }


//function for max element 

// int  MaxElement(int* arr,int size)
// {
//     int max=arr[0];
//     for (int i=0; i<size ;i++)
//     {
//         if(*(arr+i) >max)
//         {
//             max=*(arr+i);
//         }
//     }
//     return max;
// }



// function for sum of element 

// int Sum(int* arr,int size)
// {
//     int sum=0;
//     for (int i=0;i<size;i++)
//     {
//         sum+=*(arr+i);//or sum+=arr[i];
//     }
//     return sum;
// }



//function for Searching Element

// int SearchElement(int* arr,int size,int target)
// {
//     for (int i=0;i<size;i++)
//     {
//      if (arr[i]==target)
//      {
//         return i;
//         break;
//      }
//     }
//     return -1;
// }


void CopyElement(int* arr,int size)
{
    int copiedArr[size];
    for (int i=0;i<size;i++)
    {
        copiedArr[i] = *(arr+i);
        
    }

    for (int i=0;i<size;i++)
    {
       cout<< copiedArr[i]<<" ";
        
    }
}
int main()
{
     // Question 1

    //int arr[5]={1,2,3,4,5};
    // int *ptr=arr;
    // for (int i=0;i<5;i++)
    // {
    //     cout <<ptr[i]<<" ";
    //     //Other way to represent => *(ptr+i)
    // }




    // Question 2
    
    // int arr[5]={10,20 ,30,40,50};
    
    // int size=5;

    // IncreamentByTen( arr, size );




    //Question 3

    // int arr[5] ={1,2, 8,95,62};
    // int size=5;
    // cout<<"Maximum Element : "<<MaxElement (arr,size);




    //Question 4

    // int arr[5] ={1,2, 8,95,62};
    // int size=5;
    // cout<<"Sum of element : "<< Sum(arr,size);




    //Question 5
    // int target =9;
    // int arr[5] ={1,2, 8,95,62};
    // int size=5;
    // cout<<"Is Element in it : "<< SearchElement(arr,size, target);



    //Question 6
    int arr[5] ={1,2, 8,95,62};
    int size=5;
    CopyElement(arr,size);




}