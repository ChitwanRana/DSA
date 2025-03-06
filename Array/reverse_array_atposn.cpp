#include<iostream>
using namespace std;

void reverseatposn(int arr[],int size, int element)
{
      int start=element+1;
      int end=size-1;

     while(end>start) {
          swap(arr[start],arr[end]);
          start++;
          end--;
      }
     

     cout<<"array is";
     for(int i=0;i<size;i++)
     {
          cout<<arr[i];
     }
}

int main(){

     int size,arr[20],element;

     cout<<"enter size";
     cin>>size;
     cout<<"enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }
     cout<<"enter index after which it got reversed";
     cin>>element;

     reverseatposn(arr,size,element);
}
