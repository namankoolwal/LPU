#include<iostream>
using namespace std;

class demo{
static int a;

public:
    static void disp(){
    cout<<"value of a is "<<a;
    }
};
int demo::a=90;
main(){
demo obj;
obj.disp();
}
