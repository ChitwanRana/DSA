#include<iostream>
using namespace std;

class School{
     private:int fees;
     public: int roll_no;
               string name;

               void set_data(int fees){
                    this->fees=fees;
               }

               void get_data(){
                    cout<<name;
                    cout<<roll_no;
                    cout<<fees;
               }
};

class classes :public School{

     public: int section;
          int extra_feee;
     void get(){
          cout<<extra_feee;
          cout<<section;
     }
};

int main(){
     classes obj;
     obj.extra_feee=1000;
     obj.set_data(5000);

     
}