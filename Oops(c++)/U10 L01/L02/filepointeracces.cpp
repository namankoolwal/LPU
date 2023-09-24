#include<iostream>
#include<fstream>
using namespace std;
int main(){
fstream file;
file.open("file1.txt", ios::out);
if(!file){
cout<<"error";
}
file<<"opps using c++";
cout<<"current position in file"<<file.tellp()<<endl;
file.close();
file.open("file1.txt", ios::in);
if(!file){
    cout<<"ERROR";
}
cout<<"After writing position is"<<file.tellg()<<endl;
char ch;
while(!file.eof())
{
    cout<<"position: "<<file.tellg();
    file>>ch;
    cout<<"chractor \ " <<ch<<endl;
}
file.close();
return 0;
}

