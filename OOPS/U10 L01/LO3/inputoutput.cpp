#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(){
ofstream fout;
char ch;
int line = 0;
int i;
fout.open("sample.txt", ios::app);
if(!fout){
    cout<<"error"<<endl;
}
for(i=33 ; i<128 ;i++)
{
    fout.put((char)(i));
}
fout.close();
ifstream fin;
fin.open("sample.txt",ios::in);
fin.seekg(0);

for(i=33;i<128;i++)
{
    fin.get(ch);
    cout<<i<<"=";
    cout.put((char)(i));
    cout<<"\t";
    if(!(i%8))
    {
        cout<<"\n";
        line++;
    }
    if(line>22)
    {
        system("PAUSE");
        line=0;
    }
}
return 0;
}
