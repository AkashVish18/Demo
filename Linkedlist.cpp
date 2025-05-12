#include <bits/stdc++.h>
using namespace std ;

struct Node {
    int value ; 
    Node* next ; 
    Node(){
        next = NULL ; 
    }
    Node( int data ){
        value = data ; 
        next = NULL ; 
    }
};

struct LinkedList {
    private: 
    Node* head ; 
    public: 
    LinkedList(){
        head = NULL ; 
    }
       // push( data = 10)
    void push(int data){
        // data = 10 ;
        // { value : 10 , next : NULL } 
        Node* node = new Node(data) ;
      // Node* node1 = new Node(10) ;
        if( head == NULL ){
            head = node ; 
            return ; 
        }
        Node* temp = head ; 
        
        while( temp -> next!= NULL ){
            temp = temp -> next ; 
        }
        temp -> next = node ; 
        return ; 
    }
    
    void printList(){
        if( head == NULL){
            cout<< "Nothing to print!!" ;
            return ;
        }
        Node* temp = head ; 
        while( temp != NULL ){
            cout<< temp -> value<<" " ; 
            temp = temp -> next ; 
        }
        
    }
    
};

int main() {
   LinkedList List ; 
   List.push(20);
   List.push(20);
   List.push(20);
   List.push(20);
   List.push(20);
   List.push(20);
   List.printList();
}