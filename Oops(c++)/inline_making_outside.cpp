#include<iostream>
using namespace std;

class demo{
int x;

public:
    void getdata(int a);
    void display();
};
inline void demo::getdata(int a){
    x=a;
    }
inline void demo::display()
    {
    cout<<"A is: "<<x;
    }
int main(){
    demo obj;
    obj.getdata(50);
    obj.display();
}
