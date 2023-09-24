#include<iostream>
using namespace std;
class A
{
int x;
public:
A(int temp){x = temp;}
void operator ++()
{
cout<<"Unary operator is called"<<endl;
x = x + 1;
}
void showA()
{
cout<<"The value of x =" <<x<<endl;
}
};
int main(){
A obj1(100),obj2(0);
 ++obj1;
obj1.showA();
obj2.showA();
}