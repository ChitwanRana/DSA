#include<iostream>
using namespace std;

void rotate(int nums[],int size,int k){
 
      int arr1[10000];
        int j=0;
        for(int i=0;i<k;i++){
            arr1[i]=nums[size-k+i];
        }
        for(int i=k;i<size;i++){
            arr1[i]=nums[j];
            j++;
        }
     
    for(int i=0;i<size;i++){
        cout<<arr1[i];
    }
}



int main(){

     int arr[20],size,k;
     cout<<"enter size ";
     cin>>size;

     cout<<"enter k";
     cin>>k;

     cout<<"enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }

     rotate(arr,size,k);
}