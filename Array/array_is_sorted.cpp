#include<iostream>
using namespace std;

bool issorted(int arr[], int size){
     
     for(int i=0;i<size;i++){
          if(arr[i]<=arr[i+1]){
               return 1;
          }
          else{
               return 0;
          }
     }

}
bool sortedbehind(int arr[], int size){
     for(int i=size;i>=1;i--){
          if(arr[i]>=arr[i-1]){
               return 1;
          }
          else {
               return 0;
          }
     }
}

int main(){

     int size;
     int arr[100];

     cout<<"enter size ";
     cin>>size;

     cout<<"enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }
    cout<<"using front "<< issorted(arr,size)<<endl;
    cout<<"using back"<< sortedbehind(arr,size);
}