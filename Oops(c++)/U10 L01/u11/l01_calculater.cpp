#include<iostream>
using namespace std;
template <class T>
class operation{
T num1,num2;
public:
    operation(T a, T b)
    {
        num1 = a;
        num2 = b;
    }
    void disp_output(){
    cout<<"first number is "<<num1<<endl;
    cout<<"second number is "<<num2<<endl;
    cout<<"sum is "<<add()<<endl;
    cout<<"subtraction is "<<sub()<<endl;
    cout<<"product is "<<multi()<<endl;
    cout<<"division is "<<div()<<endl;
    }
    T add(){return num1+num2;}
    T sub(){return num1-num2;}
    T multi(){return num1*num2;}
    T div(){return num1/num2;}
};
int main(){
operation<int>int_opr(10 , 2);
operation<float>float_opr(10.5,2.35);
cout<<"integer calculation"<<endl;
int_opr.disp_output();
cout<<"floating point calculation"<<endl;
float_opr.disp_output();
return 0;
}
