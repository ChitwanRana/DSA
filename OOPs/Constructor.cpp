#include<iostream>
using namespace std;

class Bank{

     private:
          int bank_balance;
     public:
          int account_no;
          string holder_name;

          Bank(){                                                // Parametrized 
               cout<<"Constructor Initialization"<<endl;
          }
          void set_info(int bal, int acc, string name)
          {
               bank_balance=bal;
               account_no=acc;
               holder_name=name;
          }

          Bank(int bank_balance,int account_no,string nameq)          // Non - Parametrized 
          {
               this->bank_balance=bank_balance;                  // this function 
               this->account_no=account_no;
               holder_name=nameq;
          }
          ~Bank(){                                     // Destructor
               cout<<endl<<"Destructor";
          }
          
};
int main(){
     Bank obj(123,1234,"Alex");
     Bank obj1(obj);                         // Copy Constructor 
     cout<<obj.account_no<<endl;
     cout<<obj1.holder_name;
}