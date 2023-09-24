#include<iostream>
#include<fstream>
using namespace std;
class createFile{
public:
    createFile(){
    fstream fs;
    fs.open("afile.txt", ios::out);
    if(!fs){
        cout<<"file not created";
    }
    else{
        cout<<"file created";
        fs.close();
    }
    }
};
int main(){
createFile cf;
return 0;
}
