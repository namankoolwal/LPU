#include<iostream>
#include<fstream>
using namespace std;

main(){
fstream st;
st.open("atest.txt",ios::out);
if(!st){
    cout<<"file creation failed";
}
else{
    cout<<"file created";
}

}
