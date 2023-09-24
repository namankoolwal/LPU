#include<iostream>
#include<fstream>

using namespace std;
int main(){
    ifstream f1;
f1.open("newfile_sunday.txt");
char ch;
f1.get(ch);
cout<< ch;
f1.close();
return (0);
}
