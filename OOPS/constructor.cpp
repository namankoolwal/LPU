#include<iostream>
using namespace std;
class constructor{
    private :
        int x, y;
    public :
        constructor(){
            x=10;
            y=90;
            cout<<"sum of x and y is: "<< x+y;
        }
};
int main (){
    constructor c;
    return 0;
}
