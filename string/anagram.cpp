#include<iostream>
#include<vector>
#include<string>
using namespace std;

string Anagram(string str)
{ 
     int index=0;
     vector<int> freq(26,0);
      for(int i=0;i<str.length();i++){
          index=str[i]-'a';
          freq[index]++;
      }
      int j=0;
      for(int i=0;i<26;i++){
          while(freq[i]>0){
               str[j]=i+'a';
               freq[i]--;
               j++;
          }
      }
      return str;
}

int main(){

     string s,t;
     cout<<"enter string t ";
     cin>>t;
     cout<<"enter string s ";
     cin>>s;

     s=Anagram(s);
     t=Anagram(t);

     for(int i=0;i<s.length();i++){
          if(s[i]!=t[i]){
               return false;
               break;

          }
     }
     return true;
     
}