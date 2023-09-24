#include<iostream>
using namespace std;

class A{
public:
    int x;
    int y;
    void get_data(){
    cout<<"Enter value of x :";
    cin>>x;
    cout<<"Enter value of y :";
    cin>>y;
    }
};
class B:public A{
public:
    void show_sum(){
    cout<<"sum of x and y is: "<<x+y<<endl;
    }
};
class C:public A{
public:
    void show_product(){
    cout<<"product of x and y is: "<<x*y<<endl;
    }
};

int main(){
B obj1;
C obj2;
obj1.get_data();
obj1.show_sum();
obj2.get_data();
obj2.show_product();
return 0;
}
