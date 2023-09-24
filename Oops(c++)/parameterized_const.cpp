#include<iostream>
using namespace std;

class p_const{
private:
    int a,b;
public:
    p_const(int p, int q){
    a=p;
    b=q;
    cout<<"addition of a and b is : "<<a+b<<endl;
    cout<<"subraction of a and b is : "<<a-b<<endl;
    cout<<"multiplication of a and b is : "<<a*b<<endl;
    cout<<"division of a and b is : "<<a/b<<endl;
    }
};
main(){
p_const para(100 , 20);
}
