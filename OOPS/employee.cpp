#include<iostream>
using namespace std;
class employee{
public :
    int id;
    char name[20];
    void get_data(){
    cout<<"enter employee Id "<<endl;
    cin>>id;
    cout<<"enter employee name "<<endl;
    cin>>name;
    }
 };
class salary : public employee
{
public:
    int salary;
    void get_salary(){
    cout<<"enter salary "<<endl;
    cin>>salary;
    }
    void show_details(){
    cout<<"Id = "<<id<<endl;
    cout<<"Name = "<<name<<endl;
    cout<<"Salary = "<<salary<<endl;
    }
};
int main(){
salary obj;
obj.get_data();
    obj.get_salary();
    obj.show_details();
    return 0;
}
