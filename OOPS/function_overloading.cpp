#include<iostream>
using namespace std;

class sample{
public:
    int chk_num(){
    int a=100;
    cout <<"value of a is "<<a<<endl;
    }
    int chk_num(int a){
    if(a%2==0){
        cout<<"Entered no is even "<<a<<endl;
    }
    else{
        cout<<"Entered no is odd "<<a<<endl;
    }
    }
    float chk_num(float x , float y){
    cout<<"Sum of float point no is "<<x+y<<endl;
    }
    double chk_num(double a , double b , double c){
    if(a>b && a>c){
        cout<<"A is larger "<<a<<endl;
    }
    if(b>a && b>c) {
        cout<<"B is larger "<<b<<endl;
    }
    else {
        cout<<"C is larger "<<c<<endl;
    }
    }
};

main(){
sample obj;
obj.chk_num();
obj.chk_num(15);
obj.chk_num(15.25 , 12);
obj.chk_num(10000 , 50000 , 40000);
}
