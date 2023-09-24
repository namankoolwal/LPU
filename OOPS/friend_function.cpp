#include<iostream>
using namespace std;

class num{
int x;
public:
    friend void display(num n);
    void getdata(int y);
};

void num::getdata(int y){
x=y;
}
void display(num n){
cout<<"entered no is: "<<n.x;
}
main(){
num obj;
obj.getdata(10);
display(obj);
}
