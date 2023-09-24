#include<iostream>
using namespace std;
template<class T>
class sum{
T num1, num2;
public:
    sum(T a, T b){
    num1=a;
    num2=b;

    }
    void disp(){
    cout<<"numbers are "<< num1 <<","<< num2<<endl;
    cout<<"sum is "<< add()<<endl;
    }
T add(){return num1+num2;}
};
main(){
sum<int>sumint(10,40);
sum<float>sumfloat(41.02,50.25);
cout<<"show sum of integers"<<endl;
sumint.disp();
cout<<"show sum of floating no"<<endl;
sumfloat.disp();
}
