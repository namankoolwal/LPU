#include<iostream>
using namespace std;

class sample{
int x=10;
public:
    void display(sample s){
    cout<<"the value of x after passing object is: "<<x<<endl;
    }
};
int main(){
sample obj;
obj.display(obj);

}
