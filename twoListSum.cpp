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
    // insertion at end 
void insertAtEnd(int data){
        Node* node = new Node(data) ;
        if( head == NULL ){
            head = node ; 
            return ; 
        }
        Node* temp = head ; 
        
        while( temp -> next!= NULL ){
            temp = temp -> next ; 
        }
        temp -> next = node ; 
    }
void insertAtStart(int data)
{
    Node* node = new Node(data);
    
    node->next=head;
    head=node;
}

Node* getHead()
{
    Node* temp=head;
    return temp; 
    
}


void printList()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout <<temp->value<< " ";
        temp=temp->next;
    }
}
};

void SumOfList(Node* temp1,Node* temp2, LinkedList& List3)
{
    int num1=0;
    int num2=0;
    int sum=0;
     
  //   cout<<temp1->value<<endl;
      
  //   cout<<temp2->value<<endl;
    
    while (temp1!=NULL)
    {
        num1=num1*10+(temp1->value);
        temp1=temp1->next;
    }
   // cout<<num1<<endl;
    
    while (temp2!=NULL)
    {
        num2=num2*10+(temp2->value);
        temp2=temp2->next;
    }
   // cout<<num2<<endl;
    
    sum = num1 + num2;
    // cout<<sum<<endl;
    while( sum!=0)
    {
        int digit =sum%10;
       // cout<<digit<<endl;
        List3.insertAtStart(digit);
        sum=sum/10;
        
    }
    
}


int main() {
    
    LinkedList List1;
    LinkedList List2;
    LinkedList List3;
    
    
    List1.insertAtEnd (1);
    List1.insertAtEnd (1);
    List1.insertAtEnd (2);
    List1.insertAtEnd (2);
    
    List2.insertAtEnd(5);
    List2.insertAtEnd (3);
    List2.insertAtEnd(1);
    List2.insertAtEnd (2);
    
    Node* HEAD1=List1.getHead();
    Node* HEAD2=List2.getHead();
    
    SumOfList(HEAD1,HEAD2,List3);
    
    List3.printList();
}