#include<iostream>
using namespace std;
class student{
    public:
    int roll_no;
    char name[20];
    void get_data(){
        cout<<"Enter roll number:";
        cin>>roll_no;
        cout<<"Enter name:";
        cin>>name;
    }

};
class age:public student{
public:
int age;
void get_age(){
    cout<<"Enter age:";
    cin>>age;
}

};
class course{
    public:
    char subject[100];
    void get_subject(){
        cout<<"Enter subject opted:";
        cin>>subject;
    }
};
class details:public age, public course{
    public:
    void show_all(){
        cout<<"Student details is :"<<endl;
        cout<<"Roll Number : "<<roll_no<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};
main()
{
   details obj;
   obj.get_data();
   obj.get_age();
   obj.get_subject();
   obj.show_all();



}