#include<iostream>
using namespace std;

class time{
int h ,m;
public:
    time(int t){
    h=t/60;
    m=t%60;
    }
    void show();

};
void time::show(){
cout<<h<<"hours"<<endl;
cout<<m<<"minuts"<<endl;
}
main(){
int duration;
cout<<"enter total duration";
cin>>duration;
time t1(duration);
t1.show();
}
