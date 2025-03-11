#include<iostream>
using namespace std;

 int lenght(char name[])
 {
     int count=0;
     for(int i=0;i<name[i]!='\0';i++){
          count++;
     }
     return count;
 }

 int reverse_string(char name[],int size){

     int start=0;
     int end=size-1;

     while(start<end){
          swap(name[start],name[end]);
          start++;
          end--;

     }
     cout<<name;

 }


int main(){

     char name[20];

     cout<<"enter string";
     cin>>name;

     int size=lenght(name);
     cout<<size<<endl;
     reverse_string(name,size);


}