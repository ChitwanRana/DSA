#include<iostream>
#include<algorithm>
using namespace std;

void reverse(int arr[],int size,int k){
     
     int s=0;
     int e=size-1;

     while(s<e){

          swap(arr[s],arr[e]);
          s++;
          e--;
     }

    

          int w=0;
          int x=k-1;
          while(w<x){
          swap(arr[w],arr[x]);
          w++;
          x--;

     }


    

          int z=k;
          int a=size-1;
          while(z<a){
          swap(arr[z],arr[a]);
          z++;
          a--;
     }

     for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
     }
     
}



int main(){

     int arr[20],size,k;
     cout<<"enter size ";
     cin>>size;

     cout<<"enter K ";
     cin>>k;

     cout<<"enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }

     reverse(arr,size,k);
}