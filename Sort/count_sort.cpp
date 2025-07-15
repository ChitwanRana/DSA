#include<iostream>
#include<vector>
using namespace std;

int count_sort(vector<int> arr, int size){

     vector<int> freq(100,0);
     int index;
     int max=0;
     for(int i=0;i<arr.size();i++){
          if(arr[i]>max){
               max=arr[i];
          }
     }

     for(int i=0;i<=max;i++){
          int index=arr[i];
          freq[index]++;
     }

     for(int i=0;i<max;i++){
          while(freq[i]--){
               
          }
     }
}

int main(){

     int size;
     vector<int> arr(100);

     cout<<"enter size";
     cin>>size;

     cout<<"enter Vector";
     for(int i=0;i<arr.size();i++){
          cin>>arr[i];
     }

     count_sort(arr,size);
}