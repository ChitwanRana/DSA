#include<iostream>
#include<algorithm>
using namespace std;

int largest(int arr[],int size){
     
     int large=-1;
     for(int i=0;i<size;i++){
          if(large<arr[i]){
               large=arr[i];
          }
     }
     return large;
}

int selection_sort(int arr[],int size){

     for(int i=0;i<size-1;i++){
          int mini=i;
          for(int j=i+1;j<size;j++){
               if(arr[mini]>arr[j]){
                    mini=j;
               }
               

          }
          swap(arr[i],arr[mini]);
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

     selection_sort(arr,size);
}