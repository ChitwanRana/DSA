#include<iostream>
using namespace std;

int reverse(int arr[],int size){

     int start=0;
     int end=size-1;

     for(int i=0;i<size;i++){

          if(start<end){
          
          int swap=arr[start];
          arr[start]=arr[end];
          arr[end]=swap;
          start++;
          end--;
     }
}

}
void reverse_using_while(int arr[],int size){

     int start=0;
     int end=size-1;

     while(start>end){
          swap(arr[start],arr[end]);
          start++;
          end--;
     }



}

void Print(int arr[],int size){

     for(int i=0;i<size;i++){
          cout<<arr[i];
     }
     cout<<endl;
}

int main(){

     int size,arr[20];
     cout<<"enter size";
     cin>>size;

     cout<<"enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }

     reverse(arr,size);
     Print(arr,size);
     reverse_using_while(arr,size);
     Print(arr,size);

}