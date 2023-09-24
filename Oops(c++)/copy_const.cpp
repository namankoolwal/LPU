#include<iostream>
using namespace std;
class copyconstructor{
    int x,y;
public:
    copyconstructor(int x1 , int y1){
        x=x1;
        y=y1;
    }
    copyconstructor(const copyconstructor &sam){
    x=sam.x;
    y=sam.y;
    }
    void display(){
    cout << x << " " << y <<endl;
    }
};
int main(){
copyconstructor obj1(10,15);
copyconstructor obj2=obj1;
cout << "constructor : ";
obj1.display();
cout <<"copy constructor : ";
obj2.display();
return 0;
}
