#include<iostream>
using namespace std;

class base{
private :
    int x=10;
public:
    void disp(){
    cout<<"value of x is : "<<x<<endl;
    }
};

class derived : public base{
private:
    int y;
public:
    void get_data(){
    cout<<"enter value of y : ";
    cin>>y;
    }
    void show_data (){
    cout<<"value of y is : "<<y;
    }
};

int main(){
    derived obj;
    obj.disp();
    obj.get_data();
    obj.show_data();
    return 0;
}
