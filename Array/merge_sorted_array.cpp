#include<iostream>
using namespace std;
#include <algorithm>

void merge_array(int arr1[],int arr2[],int size1,int size2){

     int k=size1+size2;
     int w=0;
     for(int i=size1;i<k;i++)
     {
          arr1[i]=arr2[w];
          w++;

     }

     sort(arr1,arr1+k);

     cout<<"Merged Array";
     for(int i=0;i<k;i++){
          cout<<arr1[i]<<" ";
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