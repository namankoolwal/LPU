#include<iostream>
using namespace std;
class base{
public:
    virtual void test()=0;
    };
    class derived : public base{
public:
    void test(){
    cout<< "hello! pure virtual function";
    }
    };
    main(){
    derived obj;
    obj.test();
    }
