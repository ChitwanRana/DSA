#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isAnagram(string s1,string s2){

     vector<int> v(26,0);

     if(s1.size()!=s2.size()){
          return false;
     }

     for(int i=0;i<s1.length();i++){
          
          v[s1[i]-'a']++;
          v[s2[i]-'a']--;
     }

     for(int i=0;i<26;i++){
          if(v[i]!=0){
               return false;
          }
     }
     return true;
}

int main(){

     string s1,s2;
     cout<<"enter first string ";
     cin>>s1;
     cout<<"Enter second String ";
     cin>>s2;

     if(isAnagram(s1,s2)){
          cout<<"It is Anagram ";

     }
     else{
          cout<<"Not Anagram ";
     }

}