#include<iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout<<"this is class A"<<endl;
    }
};
class B:public A
{
public:
    void show_b()
    {
        cout<<"this is class B"<<endl;
    }
};
class C
{
public:
    C()
    {
        cout<<"this is class C"<<endl;
    }
};
class D:public B, public C
{
public:
    void show_d()
    {
        cout<<"this is D class"<<endl;
    }
};
main()
{
    D obj;
    obj.show_b();
    obj.show_d();
    obj.show();
}
