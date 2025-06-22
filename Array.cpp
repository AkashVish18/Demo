#include<iostream>

using namespace std ;
// 
// size , capacity , arrayPtr 
// kitne Element hai => size ; 1 Litre
// Kitne Element ho sakte hai => capacity  52 Litre 
// representing array with size number of element and can held capacity number of element => array ; 
template<typename T>

struct MyArray {
    private:
    T* arrayPtr ; 
    int size ; 
    int capacity ;

    void restructure(int newCap ){

        T* newArrayPtr = new T[newCap] ;
          
        for( int i = 0 ; i < size ; i++){
            
            newArrayPtr[i] = arrayPtr[i];
        }
       delete[] arrayPtr ; 
       
       arrayPtr = newArrayPtr ;
    }
    public:
    
    MyArray(){
        arrayPtr = new T[1];
        size = 0 ; 
        capacity = 1; 
    } 
    
    void push(T data){
        if( capacity == size ){
            restructure(2*capacity);
        }
        arrayPtr[size] = data;
        size++ ;
    }

    T& operator[](int index){
        if( index < 0 || index >= size) {
            throw out_of_range("Segmentation fault!!");
        }
        return arrayPtr[index];
    }
    
    int Size() const {
        return size ;
    }

    int searchElement(MyArray arr, T target)
    {
        int n=Size();
        int index;
        for (int i = 0; i < n ; i++)
        {
            if (arr[i]==target)
            {
                index=i;
                break;
            }
            
        }
                return index;
        
    }
    
    void pop_back(MyArray& arr,int index)
    {
        if (index <0 || index >= arr.Size())
        {
            cout << "Plz Enter valid Index"<<endl;
            return ;
        }
        
        for (int i = index ; i < arr.Size()-1 ; i ++ )
        {
                int a = arr[i];
                arr[i] = arr[i+1];
                arr[i+1]=a;
        }
        
        size = size-1;
        cout<<arr.Size()<<endl;
        
        if (size*2 < capacity)
        {
             restructure(size*2);
        }
        
    }
    
    void Sort(int start, int end)
   {
    if (start < 0 || end >= size || start > end)
    {
        cout << "Enter valid start and end indexes.";
        return;
    }

    for (int i = start; i < end ; i++)
    {
        for (int j = start; j < end  ; j++)
        {
            if (arrayPtr[j] > arrayPtr[j + 1])
            {
                T t = arrayPtr[j];
                arrayPtr[j] = arrayPtr[j + 1];
                arrayPtr[j + 1] = t;
            }
        }
    }
    }


    void reverseTheArray(int start , int end , MyArray& arr)
    {
    if (start < 0 || end >= arr.Size())
    {
        cout<<"Enter Valid Index"<<endl;
        return;
    }

    while (start < end)
    {
        T t = arr[start];
        arr[start] = arr[end];
        arr[end] = t;

        start++;
        end--;
    }
}

    
    void print(){
        for( int i = 0 ; i < size ; i++ ){
            cout<< arrayPtr[i]<<" ";
        }
    }
    
} ;

int main()
{
    MyArray<int> arr;
    arr.push(5);
    arr.push(2);
    arr.push(9);
    arr.push(8);
    arr.push(7);
    arr.push(6);
    
    // int n=arr.Size();
    // cout<<n;
    
     //int idx=arr.searchElement( arr, 8);arr
     //cout<<"Found at index => "<<idx<<endl;
     
     int index;
     cout<<"Enter index = > ";
     cin>>index;
     arr.pop_back(arr,index );
    //  arr.Sort( 5, 0 );
    
    // arr.reverseTheArray(2 , 4 , arr);
 
     arr.print();
}