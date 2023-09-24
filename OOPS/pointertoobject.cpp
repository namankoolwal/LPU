#include<iostream>
using namespace std;
class sum{
   int a,b;
   public:
   void get_data(int x ,int y){
    a=x;
    b=y;
   } 
   int display(){
    return a+b;
   }
};

main(){
    sum obj;
    sum*p;
    p=&obj;
    p->get_data(15,35);
    cout<<"sum of a and b is "<<p->display()<<endl;
}