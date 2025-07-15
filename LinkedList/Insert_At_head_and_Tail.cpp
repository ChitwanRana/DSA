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
               cout<<ptr->data<<" ";
               ptr=ptr->next;
          }

     }

     void InsertAtTail(Node* &tail,int d){
          Node* temp1=new Node(d);
          tail->next=temp1;
          tail=temp1;
     }

     void InsertAtPosn(Node* head,Node* tail,int posn, int d){
          if(posn==1){
            InsertAtHead(head,d);
          }

          Node* temp=head;
          Node* newnode= new Node(d);

          int count=1;
          while(count<posn-1){
               temp=temp->next;
               count++;
          }
          if(temp->next==NULL){
               InsertAtTail(tail,d);
          }
          newnode->next=temp->next;
          temp->next=newnode;
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
     cout<<endl;
     InsertAtPosn(head,tail,3,123);
     print(head);
}