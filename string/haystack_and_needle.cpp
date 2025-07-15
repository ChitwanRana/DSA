#include<iostream>
#include<string>
using namespace std;

int found_or_not(string haystack, string needle){

     int start=0;
     int j=0;
     int count=0;
     for(int i=0;i<haystack.size();i++){
          if(needle[0]==haystack[i])
          {
               start=i;
               break;
          }
     }
     for(int i=start;i<needle.size()+start;i++){
          if(haystack[i]==needle[j]){

               count++;
               j++;
          }
          else{
               cout<<"Not equal ";
          }
     }
     if(count==needle.size()){
          cout<<"Needle Found in Haystack at index "<<start;
     }
     else{
          cout<<"Needle Not present in Haystack";
     }

}

int main(){

     string needle;
     string haystack;

     cout<<"Enter Haystack ";
     getline(cin,haystack);

     cout<<"Enter Needle ";
     getline(cin,needle);

     found_or_not(haystack , needle);
     
}
