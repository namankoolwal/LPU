#include<iostream>
using namespace std;
class sample{
int number;
public:
    sample():number(0){  }
    friend int printNumber(sample);
};
int printNumber(sample s){
s.number+=100;
return s.number;
}
main(){
sample s;
cout<<"ENTERED NO IS: "<<printNumber(s);
}
