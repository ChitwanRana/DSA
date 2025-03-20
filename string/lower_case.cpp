#include<iostream>
using namespace std;

 char lowercase(char ch){

     if(ch>='a'&& ch<='z'){
          return ch;
     }
     else{
          char temp=ch-'A'+'a';
          return temp;
     }
 }


int main(){

     char name[20];
     char ch;

     cout<<"enter string";
     cin>>ch;

     cout<<lowercase(ch);

}