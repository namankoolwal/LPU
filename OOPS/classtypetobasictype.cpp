#include<iostream>
using namespace std;
class time
{
    int h,m;
public:
    time(int a, int b){
    h=a;
    m=b;
    }
    operator int(){
    cout<<"\n class type to basic type conversion";
    return(h*60+m);
    }
    ~time(){
    cout<<"destructor called"<<endl;
    }

};
main(){
int h,m,duration;
cout<<"enter hours"<<endl;
cin>>h;
cout<<"enter min."<<endl;
cin>>m;
time t(h,m);
duration=t;
cout<<"total minuts"<<duration<<endl;
cout<<"second method"<<endl;
duration=t.operator int();
cout<<"total minuts"<<duration;

}
