#include<iostream>
using namespace std;
class employee{
    int id, salary;
    string name;
    public:
    employee(int e_id, string e_name ,int e_salary){
        this-> id=e_id;
        this-> name=e_name;
        this-> salary=e_salary;
    }
    void display(){
        cout<<id<<name<<salary<<endl;

    }
};
main(){
    employee e1=employee(10, "naman" ,25000);
    e1.display();
}