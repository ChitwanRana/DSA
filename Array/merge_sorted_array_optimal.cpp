#include<iostream>
using namespace std;
#include <algorithm>

void merge_array(int arr1[],int arr2[],int size1,int size2){

     int arr3[200];
     int w=size1+size2;
     int j=0;
     int k=0;
    for(int i=0;i<w;i++){

     
          if(arr1[k]<arr2[j])
          {
               arr3[i]=arr1[k];
               k++;
          }
          else{
               arr3[i]=arr2[j];
               j++;
          }

    }

    cout<<"Sorted Array is ";
    for (int i=0;i<w;i++){
     cout<<arr3[i];
    }
}




int main()
{
     int size1,size2,arr1[20],arr2[20],element;
     cout<<"enter size of 1st array ";
     cin>>size1;

     cout<<"enter first array";
     for(int i=0;i<size1;i++){
          cin>>arr1[i];
     }
     cout<<"enter size of second array";
     cin>>size2;

     cout<<"enter second array ";
     for(int j=0;j<size2;j++){
          cin>>arr2[j];
     }
     merge_array(arr1,arr2,size1,size2);


}