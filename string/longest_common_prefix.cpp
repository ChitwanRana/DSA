#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

string longest_prefix(vector<string> &str){

    sort(str.begin(),str.end());

    string s1=str[0];
    string s2=str[str.size()-1];
    string ans="";
    for(int i=0;i < min(s1.size(), s2.size());i++){

          if(s1[i]==s2[i]){
               ans+=s1[i];
          }
          else{
               break;
          }
    }
    return ans;
}

int main(){

     int n;
     cout<<"enter string size ";
     cin>>n;

     vector<string> str(n);
     cout<<"enter string ";

     for(int i=0;i<n;i++){
          cin>>str[i];
     }

     cout<<"Longest Substring is :"<<longest_prefix(str);

}