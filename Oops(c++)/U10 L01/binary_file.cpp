#include<iostream>
#include<fstream>

using namespace std;
main(){
    fstream file ("number.dat", ios::out | ios::binary);
    int buffer[5]={1,35,25,185,445};
    cout<<"now writing the data to the file.\n";
    file.write((char*)buffer , sizeof(buffer));
    file.close();
    file.open("number.dat", ios::in);

    cout<<"now reading the data back into memories.\n";
    file.read((char*)buffer, sizeof(buffer));
    for(int count=0; count<5 ; count++)
    cout<<buffer[count]<<" ";
    file.close();
}
