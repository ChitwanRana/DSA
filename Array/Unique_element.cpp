// unique element appear only once 
#include<iostream>
using namespace std;

void unique_element(int arr[],int size){
     int ans=0;

     for(int i=0;i<size;i++){
          ans=ans^arr[i];        // 1 2 2 1 3              a^a=0    , 0^a=a
     }
     cout<<ans;


}    



int main(){

     int arr[20],size;
     cout<<"enter size ";
     cin>>size;

     cout<<"enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }

     unique_element(arr,size);
}