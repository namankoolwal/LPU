#include<iostream>
#include<fstream>
using namespace std;
int main(){
char fname[20],ch;
ifstream fin;
cout<<"Enter file name ";
cin.get(fname ,20);
cin.get(ch);
fin.open(fname , ios::in);
if(!fin){
    cout<<"ERROR";
}
while(fin){
    fin.get(ch);
    cout<<ch;
}
fin.close();
return 0;
}

