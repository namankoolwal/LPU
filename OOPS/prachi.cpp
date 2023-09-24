#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"This is class A"<<endl;
  }

};
class B:public A{
    public:
    void show_b(){
        cout<<"This is class B"<<endl;
    }

};
class C {
    public:
    C(){
        cout<<"This is C class"<<endl;
    }
    
};
class D:public B,public C{
    public:
    void show_d(){
        cout<<"this is d class"<<endl;

    }
};
main(){
    D obj;
    obj.show_d();
}