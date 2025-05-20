#include<iostream>
using namespace std;

void zero_at_end(int arr[],int size){
 
     
        int temp[1000],j=0;
        for(int i=0;i<size;i++){

            if(arr[i]!=0){
                temp[j]=arr[i];
                j++;
            }
}
        for(int i=0;i<j;i++){
            arr[i]=temp[i];
        }

        for(int i=j;i<size;i++){
            arr[i]=0;
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

     zero_at_end(arr,size);
}