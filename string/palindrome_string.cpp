#include<iostream>
using namespace std;


bool reverse(char name[]){

     int size,count=0,start=0;
     

     for(int i=0;i<name[i]!='\0';i++){
          count++;
     }
     int end=count-1;

     while(start<end){
          if(name[start]!=name[end]){
               return 0;
          }
          else{
               
               start++;
               end--;
          }
     }
     return 1;

}

int main(){

     int count;
     char name[20];
     cout<<"enter name ";
     cin>>name;

     cout<<"palindrome or not "<<reverse(name);
}