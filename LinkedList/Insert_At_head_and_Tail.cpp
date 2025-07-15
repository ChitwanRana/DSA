#include<iostream>
using namespace std;

class Node{
     public: int data;
     Node* next;

     Node(int data){
          this->data=data;
          this->next=NULL;
     }

     

};
void InsertAtHead(Node* &head, int d){

          Node* temp= new Node(d);
          temp->next=head;
          head=temp;

     }
     void print(Node* &head){
          Node* ptr=head;
          while(ptr!=NULL){
               cout<<ptr->data<<"-> ";
               ptr=ptr->next;
          }

     }

     void InsertAtTail(Node* &tail,int d){
          Node* temp1=new Node(d);
          tail->next=temp1;
          tail=temp1;
     }

int main(){

     Node* node1=new Node(10);
     // cout<<node1->data<<endl;
     // cout<<node1->next;
     Node* head=node1;
     Node* tail=node1;
     // print(head);
     InsertAtHead(head,15);
     InsertAtHead(head,20);
     print(head);
     cout<<endl;
     InsertAtTail(tail,25);
     InsertAtTail(tail,30);
     print(head);



}