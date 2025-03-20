#include<iostream>
using namespace std;

bool search(int arr[],int size,int input){

     for(int i=0;i<size;i++){
          if(arr[i]==input){
               return 1;
          }
     }

}

int main(){
     
     int size,arr[20],input;

     cout<<"enter Size ";
     cin>>size;

     cout<<"Enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }
     cout<<"enter element ";
     cin>>input;

     bool found=search(arr,size,input);

     if(found){
          cout<<"key is present";
     }
     else{
          cout<<"key is absent ";
     }

     }
