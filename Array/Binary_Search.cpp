#include<iostream>
using namespace std;

int binary_search(int arr[],int size,int key){

     int start=0;
     int end=size-1;
     int mid=start+(end-start)/2;
    

     while(start<=end){

          int mid=(start+end)/2;

          if(arr[mid]==key){
               return mid;
          }
          else if(arr[mid]<key){
               start=mid+1;
          }
          else{
               end=mid-1;
          }

           mid=start+(end-start)/2;
          
     }
     return -1;
}

int main(){
     int x,arr[20],size;
     cout<<"enter size";
     cin>>size;
     cout<<"enter array";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }
     cout<<"enter key";
     cin>>x;

     cout<<binary_search(arr,size,x);


}