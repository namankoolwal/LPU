// useing basic object oriented programming classes and object
#include<iostream>

using namespace std;
class basic_class{

    public:
        int first_num,second_num;
        sum(int a ,int b){
            cout<<"Sum of a and b is"<<a+b;
        }
};
int main(){
    basic_class b1;
    cout<<"enter first number";
    cin>>b1.first_num;
    cout<<"enter second number";
    cin>>b1.second_num;
    // cout<<"sum of entered number"<<b1.first_num+b1.second_num;
    b1.sum(b1.first_num,b1.second_num);
    return 0;
}