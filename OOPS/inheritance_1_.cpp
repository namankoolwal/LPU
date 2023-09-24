#include<iostream>
using namespace std;
class A
{
public:
    void showA()
    {
        cout <<"THIS IS CLASS A"<<endl;
    }
};
class B : public A
{
public:
    void showB()
    {
        cout << "THIS IS CLASS B" <<endl;
    }

};
int main()
{
    B b;
    b.showA();
    return 0;
}
