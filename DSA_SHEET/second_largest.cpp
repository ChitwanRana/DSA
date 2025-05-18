#include<iostream>
using namespace std;

void second_largest(int arr[],int size){
     // sort 
     int slargest;
     for(int i=0;i<size;i++){
          int mini=i;
          for(int j=i;j<size;j++){
               if(arr[mini]>arr[j]){
                    mini=j;
               }
          }
          swap(arr[i],arr[mini]);
     }
     for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
     }
     cout<<endl;
     int largest=arr[size-1];
     
     for(int i=size-2;i>=0;i--){
          if(arr[i]!=largest){
               slargest=arr[i];
               break;
          }
     }
     cout<<"slargest complex "<<slargest<<endl;
     cout<<"slargest normal "<<arr[size-2]<<endl;
     cout<<"largest "<<arr[size-1];
 
}

void better_soln(int arr[], int size)
{
     int large=-1;
     for(int i=0;i<size;i++){
          if(large<arr[i]){
               large=arr[i];
          }
     }
     cout<<"large is "<<large<<endl;
     int slarge=-1;
     for(int i=0;i<size;i++){
          if(slarge<arr[i] && arr[i]!=large)
          {
               slarge=arr[i];
          }
     }
     cout<<"second large is "<<slarge;
}
void optimal_soln(int arr[], int size){

     int largest=-1,slargest=-1;
     for(int i=0;i<size;i++){
          if(arr[i]>largest){
               slargest=largest;
               largest=arr[i];
          }
          else if(arr[i]<largest && arr[i]>slargest){

               slargest=arr[i];

          }

          }
          cout<<slargest;
     }



int main(){

     int arr[20],size;
     cout<<"enter size ";
     cin>>size;

     cout<<"enter array ";
     for(int i=0;i<size;i++){
          cin>>arr[i];
     }

     optimal_soln(arr,size);
}