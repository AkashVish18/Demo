#include <bits/stdc++.h>

  
using namespace std ;

template <typename T>
struct Node {
    T value ; 
    Node* next ; 
    Node(){
        next = NULL ; 
    }
    Node( T data ){
        value = data ; 
        next = NULL ; 
    }
};

template <typename T>
struct LinkedList {
    private: 
    Node<T>* head ; 
    public: 
    LinkedList(){
        head = NULL ; 
    }
    // insertion at end 
void insertAtEnd(T data){
        Node<T>* node = new Node(data) ;
        if( head == NULL ){
            head = node ; 
            return ; 
        }
        Node<T>* temp = head ; 
        
        while( temp -> next!= NULL ){
            temp = temp -> next ; 
        }
        temp -> next = node ; 
    }

int sizeOfList()
{
    Node<T>* temp=head;
    int  count = 0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
//cout<< " Size of Linked List -> "<<count<<endl;
return count;
}



void ReversingLL()
{
    
    Node<T>* temp = head ; 
    Node<T>* abc = head ; 
    
    int n=sizeOfList();
    
    
    if (n==1)
    {
        cout <<"Why BRO you are trying to reverse it !!"<<endl;
        return;
    }
    
    T arr[n];
    int i=0;
    while (temp!=NULL)
    {
        arr[i]=temp->value;
        i++;
        temp=temp->next;
    }
    
    for (int i=n-1;i>=0;i--)
    {
    //cout <<arr[i]<<endl;
    abc->value=arr[i];
    abc=abc->next;
    }
    
}

void printList()
{
    Node<T>* temp=head;
    while(temp!=NULL)
    {
        cout <<temp->value<< " ";
        temp=temp->next;
    }
}


};


int main() {
    
    LinkedList<int> List;
    
    List.insertAtEnd(10);

    List.ReversingLL();
  
    List.printList();
   

}