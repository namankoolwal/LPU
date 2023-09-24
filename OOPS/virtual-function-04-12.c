#include<iostream>
using namespace std;
class base{
public:
    virtual void print(){
    cout<<"base class"<<endl;
    }
};
class derived: public base{
public:
    void print(){
    cout<< "derived class";
    }
};
int main(){
base b;
derived obj;
Base *bptr;
bptr=&obj;
b.print();
}
