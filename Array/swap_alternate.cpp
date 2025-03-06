#include<iostream>
using namespace std;


void alternate_swap(int arr[],int size){

     for(int i=0;i<size;i+=2){

          if(i+1<size){
               swap(arr[i],arr[i+1]);
          }                                               // 1 2 3 4 5 
     }                                                  // 2 1 3 4 5  ||  
     for (int i=0;i<size;i++){
          cout<<arr[i];
     }
}

int main(){
     int arr[20],size;

     cout<<"enter size";
     cin>>size;

     cout<<"enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];

     }

     alternate_swap(arr,size);
}