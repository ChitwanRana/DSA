#include<iostream>
using namespace std;

void linear_search(int arr[],int size,int key){
     int ans;

     for(int i=0;i<size;i++){
          if(arr[i]==key){
               ans=i;
               break;
          }
     }
     cout<<"found at" <<ans;
 
}



int main(){

     int arr[20],size,key;
     cout<<"enter size ";
     cin>>size;

     cout<<"enter element to found ";
     cin>>key;

     cout<<"enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }

     linear_search(arr,size,key);
}