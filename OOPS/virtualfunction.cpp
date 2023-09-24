#include<iostream>
using namespace std;
class A{
    public:
    virtual void test()=0;
};

class B:public A{
    public:
    void test(){
        cout<<"hello! virtual function"<<endl;
    }
};
int main(void){
    B obj;
    obj.test();
    return 0;
}