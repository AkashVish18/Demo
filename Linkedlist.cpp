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
//insertion at start

void  insertATs(T data)
{
    Node<T>* node = new Node(data);
  node->next=head;
  head = node;
    
    
}

void searchNode( T num)
{
    Node<T>* temp= head;
    int n=0;
    while (temp!=NULL)
    {
        if(temp->value==num)
        {
            n=1;
            break;
        }
        temp=temp->next;
    }
    
    if (n==0)
    {
        cout <<"not found ";
    }
    else{
        cout <<"found ";
    }
    
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
    cout<< " Size of Linked List -> "<<count<<endl;
return count;
}

void DeleteSTART()
{
    if (head==NULL)
    {
        cout <<"NOTHING TO DELETE !!";
        return;
    }
    
    head=head->next;

    cout <<head;//Address of 50;
    cout <<endl;
    
}

void DeleteEND()
{
    if (head==NULL)
    {
        cout <<"NOTHING TO DELETE !!";
        return;
    }
    
    Node<T>* temp=head;
    Node<T>* prev=head;
    
    while (temp->next!=NULL)
    {
         prev = temp ; 
         temp = temp -> next ; 
    }
    
    prev->next=NULL;
    
}

void insertMid(T data , int position){
        
        int size =sizeOfList();
        
        if (position <= 1 || position > size)
      {
          cout << "Can't insert: invalid position" << endl;
          return;
      }
        
        
       
        
        Node<T>* node = new Node(data);
        Node<T>* prev = head ; 
        Node<T>* temp = head ; 
        

        while( temp != NULL ){
            if(position == 1 ){

                break ;
            }
            prev = temp ; 

            temp = temp -> next ;
            position-- ;
        }
        
        node -> next = temp ;
        prev -> next = node ; 
    
    }

void DELETEMid(int position)
{
    int size =sizeOfList();
    if (position <= 1 || position > size)
    {
        cout << "Can't delete: invalid position" << endl;
        return;
    }

    //
    
    Node<T>* temp=head;
    Node<T>* Pre =head;
  
    while(temp!=NULL)
    {
        if (position==1)
        {
            break;
        }
        position--;
        Pre=temp;
        temp=temp->next;
    }
    
    Pre->next=temp->next;
}

void OddEven()
{
    Node<T>* temp =head;
    while(temp!=NULL)
    {
        if (temp->value%2==0)
        {
            cout <<temp->value<<" : Even Hai ! "<<endl;
        }
        else
        {
            cout <<temp->value<<" : Odd Hai ! "<<endl;
        }
        temp=temp->next;
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
    List.insertAtEnd (20);
    List.insertAtEnd(10);
    List.insertAtEnd(10);
    List.insertAtEnd (20);
    List.insertAtEnd(10);
  
   
    
   // List.printList ();
//   cout <<"Enter any Number ! "<<endl;
//   int num;
//   cin>>num;
//   List.searchNode(num);
//   List.sizeOfList();
  List.insertATs(8);    
  List.insertATs(50);
  List.insertATs(50);
//   List.DeleteEND();
//   List.DeleteSTART();
//   List.insertMid(500,2);
//   List.insertMid(500,1);
//   List.insertMid(500,0);
//   List.insertMid(500,2);
//   List.DELETEMid(1);
//   List.DELETEMid(2);
//   List.DELETEMid(3);
//   List.DELETEMid(6);
   //List.OddEven();
 List.printList();
   
   
   /*
   
   <-----------------Topics Covered----------------->
   1-Insert At Start 
   2-Insert At End 
   3-Insert At Mid
   4-Delete At Start 
   5-Delete At End
   6-Delete At Mid
   7-Print Linked List
   8-Is Even Or Odd
   9-Size Of Linked List 
   10-Linear Search in Linked List
   */

}