#include<iostream>
using namespace std;

class Teacher{
     private:
          int salary;
     public:int age;
          string name;
         

          void set_info(int a,int s, string n){
               age=a;
               salary=s;
               name=n;
          }
          void get_info(){
               cout<<" Age is "<<age<<endl;
               cout<<"Name is "<<name;
               cout<<"Salary is "<<salary;
          }
};

int main(){
     Teacher obj;

     obj.name="Rana";
     obj.age=99;
     obj.get_info();
    obj.set_info(12,12321,"raju");
    obj.get_info();


}