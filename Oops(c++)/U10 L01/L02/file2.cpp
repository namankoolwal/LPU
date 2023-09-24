#include<iostream>
#include<fstream>
using namespace std;
int main(){
ofstream file("demo.txt", ios::in);
if(!file){
    cout<<"error";
}
else{
    cout<<file.tellp()<<endl;
    file<<"c++";
    file.seekp(100);
    file<<"c++ is an object oriented programming";
    cout<<file.tellp();
}
file.close();
}
