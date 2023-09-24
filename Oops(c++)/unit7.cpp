//Abstract class with constructor passing arguments
#include <iostream>
using namespace std ;

class A
{
int z ;
public:
A(int temp) {
z = temp ;
cout << "This is A class constructor" << endl;
}
virtual void showA()=0;
};

class B : public A
{
int x, y ;
public:
B(int t1, int t2) : A(int t2)
{
x = t1 ;
y = t2 ;
cout << "This is B class constructor" << endl;
}
void showA()
{
cout << "This is inside class B showA" << endl;
}

};
int main()
{
B obj1 ( 10, 20);
obj1.showA();
return(0);
}

