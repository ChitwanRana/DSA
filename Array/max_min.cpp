#include<iostream>
using namespace std;

int maxs(int arr[],int n ){

     cout<<"Array is ";

     for (int i=0;i<n;i++){
          cout<<arr[i];
     }
     cout<<endl<<"Array Max Element is ";

     int max=INT16_MIN;

     for(int i=0;i<n;i++){
          if(arr[i]>max){
               max=arr[i];
          }
     }
     cout<<max<<endl;;

}

void Min(int arr[],int n){

     int min=INT16_MAX;
     for (int i=0;i<n;i++){

          if(arr[i]<min){
               min=arr[i];
          }
     }
     cout<< min;
}


int  main(){

     int size;
     cout<<"enter size";
     cin>>size;

     int num[100];

     for(int i=0;i<size;i++){
          cin>>num[i];
     }
     
     maxs(num,size);
     Min(num,size);
}