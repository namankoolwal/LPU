#include<iostream>
using namespace std;
class base{
    public:
    void show(){
        cout<<"base class"<<endl;
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"derived class";
    }
};
main(){
    base *bptr;
    base b;
    bptr->show();
    derived d;
    bptr= &d;
    ((derived *)bptr)->display();
    return 0;

}