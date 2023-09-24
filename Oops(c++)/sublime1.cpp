// #include<iostream>
// using namespace std;
// class A
// {
// public:
//     void showA()
//     {
//         cout <<"THIS IS CLASS A"<<endl;
//     }
// };
// class B : public A
// {
// public:
//     void showB()
//     {
//         cout << "THIS IS CLASS B" <<endl;
//     }

// };
// int main()
// {
//     B b;
//     b.showA();
//     return 0;
// }

#include<iostream>
using namespace std;
class constructor{
    private : 
        int x, y;
    public :
        constructor(){
            x=10;
            y=100;
            cout<<"sum of x and y is: "<< x+y;
        }
};
int main (){
    constructor c;
    return 0;
}