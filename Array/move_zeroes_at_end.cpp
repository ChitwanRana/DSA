// incompelete
#include<iostream>
using namespace std;

void move_at_end(int arr[],int size){

     int w=size-1;
     for(int i=0;i<size;i++){

          if(arr[i]==0){                
               swap(arr[i],arr[w]);
               w--;

          }
     }
 

     for(int i=0;i<size;i++){
     cout<<arr[i]<<" ";
}
}



int main(){

     int arr[20],size;
     cout<<"enter size ";
     cin>>size;

     cout<<"enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }

     move_at_end(arr,size);
}