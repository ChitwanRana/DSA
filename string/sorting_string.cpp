#include<iostream>
#include<vector>
#include<string>
using namespace std;

string count_sort(string str){

     int temp,j=0;
     vector<int> freq(26,0);
     for(int i=0;i<str.length();i++){
          
          temp=str[i]-'a';
          freq[temp]++;
     }

     for(int i=0;i<26;i++){
          while(freq[i]>0){
          str[j]=i+'a';
          j++;
          freq[i]--;
     }
}
return str;
}

int main(){

     string str;
     cout<<"enter string ";
     cin>>str;

     cout<<count_sort(str);
}