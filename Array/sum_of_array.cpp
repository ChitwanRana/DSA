#include<iostream>
using namespace std;


void sum(int arr[],int size){

     int arr_sum=0;
     for(int i=0;i<size;i++){
          arr_sum +=arr[i];
     }
     cout<<"array sum is "<<arr_sum;


}

int main(){

     int arr[20];
     int size;
     cout<<"enter size";
     cin>>size;

     for(int i=0; i<size;i++){
          cin>>arr[i];
     }

     sum(arr,size);

}