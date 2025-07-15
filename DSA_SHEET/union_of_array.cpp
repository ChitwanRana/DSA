#include<iostream>
using namespace std;

int arrayunion(int arr1[],int arr2[],int size1,int size2){

     int size=size1+size2;
     int temp[size];
     int j=size1;

     for(int i=0;i<size1;i++){
          temp[i]=arr1[i];
     }
     for(int i=0;i<size2;i++){
          temp[j]=arr2[i];
          j++;

     }
}

int main(){

     int arr1[10], arr2[10], size1, size2;
     cout<<"enter size of 1st array ";
     cin>>size1;

     cout<<"enter first array";
     for(int i=0;i<size1;i++){
          cin>>arr1[i];
     } 

     cout<<"enter size of 2nd array ";
     cin>>size2;

     for(int i=0;i<size2;i++){
          cin>>arr2[i];
     }

     arrayunion(arr1,arr2,size1,size2);

     
}