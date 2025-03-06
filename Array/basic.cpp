#include<iostream>
using namespace std;

int print(int arr[],int size){

     for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
     }
}

int main(){

     int arr[15]={1,2,3,4,5,6,7,8,9};
     print(arr,18);


     int sizes=sizeof(arr);
     cout<<endl<<sizes<<endl;

     int int_size=sizeof(int);
     cout<<int_size;

     int arr_size=sizeof(arr)/sizeof(int);
     cout<<endl<<arr_size;

     cout<<endl<<sizeof(float)<<endl<<sizeof(double);

}