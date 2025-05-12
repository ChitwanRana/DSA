#include<iostream>
#include<algorithm>
using namespace std;


int rotatebykplace(int arr[],int size,int k){

     int new_arr[20];
     int j=0;
     int m=k;

     for(int i=0;i<k;i++){
          new_arr[i]=arr[size-m];
          m--;
     }

     for(int i=k;i<size;i++){
          new_arr[i]=arr[j];
          j++;
     }

     for(int i=0;i<size;i++){
          cout<<new_arr[i]<<" ";
          
     }
}



int main(){

     int arr[20],size,k;
     cout<<"enter size ";
     cin>>size;

     cout<<"enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }

     cout<<"Enter kth rotation ";
     cin>>k;

     rotatebykplace(arr,size,k);
}