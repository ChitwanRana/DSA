#include<iostream>
#include<algorithm>
using namespace std;

void find_duplicate(int arr[],int size){    // for 1 to n-1 only 
      
     int ans=0;

     for(int i=0;i<size;i++){
          ans=ans^arr[i];
     }

     for(int i=1;i<size;i++){
          ans=ans^i;
     }

}

void method2(int arr[],int size){

     sort(arr, arr + size);

     for(int i=0;i<size;i++){
          if(arr[i]==arr[i+1]){
               cout<<arr[i];
          }
     }


}

void print(int arr[],int size){

     for(int i=0;i<size;i++){
          cout<<arr[i];
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

     // find_duplicate(arr,size);
     method2(arr,size);
     // print(arr,size);
}