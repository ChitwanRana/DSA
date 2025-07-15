#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int length_of_word(string s){

     int count=0;
     int i=s.length()-1;

    while(i>=0 && s[i]==' '){
          i--;
    }
    while(i>=0 && s[i]!=' '){
          count++;
          i--;
    }
    return count;
}

int main(){

     string s;
     cout<<"Enter a string: ";
     getline(cin, s);

     cout<<"Length of last word is: "<<length_of_word(s)<<endl;

}