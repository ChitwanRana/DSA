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

     Node* temp=new Node(d);
     temp->next=head;
     head=temp;
}

void InsertAtTail(Node* &tail,int d){

     Node* temp1=new Node(d);
     tail->next=temp1;
     tail=temp1;


}
void print(Node* &head){

     Node* ptr=head;
     while(ptr!=NULL){
          cout<<ptr->data<<" ";
          ptr=ptr->next;
     }
}
void middle_element(Node* &head){
     Node* ptr=head;
     int count=0;
     while(ptr!=NULL){
          
          ptr=ptr->next;
          count++;
     }
     int mid=count/2;
     Node* ctr=head;
     for(int i=0;i<count;i++){
          if(i==mid){
               cout<<ctr->data;
          }
          else{
               ctr=ctr->next;
          }
     }
}


int main(){
     Node* node1=new Node(5);
     Node* head=node1;
     Node* tail=node1;
     
     InsertAtHead(head,4);
     InsertAtHead(head,3);
     InsertAtTail(tail,6);
     InsertAtTail(tail,7);
     InsertAtTail(tail,8);
     print(head);
     cout<<endl;
     middle_element(head);
}