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

string approach(vector<string> &str){

     string s1=str[0];
     int ans_length=s1.size();

     for(int i=1;i<str.size();i++){
          int j=0;
          while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j]){
               j++;
          }
          ans_length=min(ans_length,j);
          
     }
     string aprch=s1.substr(0,ans_length);
     return  aprch;
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

     cout<<"Longest Substring is :"<<longest_prefix(str)<<endl;
     cout<<"Longest Substring using 2nd approach :"<<approach(str);

}