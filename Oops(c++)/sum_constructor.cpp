#include<iostream>
using namespace std;

class sum{
private :
    int x,y;
public:
    sum(){
    cout<<"enter value of x"<<endl;
    cin>>x;
    cout<<"enter value of y"<<endl;
    cin>>y;
    cout<<"sum of x and y is: "<<x+y;
    }
    void msg(){
        cout<<endl;
    cout<<"Hello,This Is Member Function";
    }
};
int main(){
sum a;
a.msg();
return 0;
}
