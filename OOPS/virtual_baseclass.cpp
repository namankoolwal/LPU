#include<iostream>
using namespace std;
class A{
    public:
    int x;
};
class B: virtual public A{
    public:
    int y;
};
class C: virtual public A{
    public:
    int z;
};
class D: public B, public C{
    public:
    int x1;
};

int main(){
    D obj;
    cout<<"ENTER FOUR NUMBERS : ";
    cin>> obj.x;
    cin>> obj.y;
    cin>> obj.z;
    cin>> obj.x1;
    cout<<"\n Output: "<<endl;
    cout<<"\n X is: "<<obj.x<<endl;
    cout<<"\n Y is: "<<obj.y<<endl;
    cout<<"\n Z is: "<<obj.z<<endl;
    cout<<"\n X1 is: "<<obj.x1<<endl;

}