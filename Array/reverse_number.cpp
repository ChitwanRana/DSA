#include<iostream>
using namespace std;

void reverse_num(int x){
     int y;
     
     while(x>0){

          y=x%10;
          x=x/10;
     }

     cout<<y;

}



int main(){

  int x;
  cout<<"enter number";
  cin>>x;

  reverse_num(x);


}