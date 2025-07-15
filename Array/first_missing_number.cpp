#include<iostream>
using namespace std;

void first_missing_number(int arr[],int size){
     int max=INT16_MIN;
     int min=INT16_MAX;
     for(int i=0;i<size;i++){
          
          if(arr[i]>max)
          {
               max=arr[i];
          }
     }
     for(int i=0;i<size;i++){
          if(arr[i]<min){
               min=arr[i];
          }
     }
     cout<<"minimum is "<<min<<" "<<"and max is "<<max<<endl;

   int count=0;

     for(int j=1;j<=max;j++){
          for(int i=0;i<size;i++){
               if(j==arr[i]){
                    count++;
               }
               if(count==0){
                    cout<<"number is "<<j;
               }
          }
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

     first_missing_number(arr,size);
}