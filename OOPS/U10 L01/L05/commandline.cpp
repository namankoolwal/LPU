#include<iostream>
using namespace std;
int main(int argc,char*argv[]){
//cout<<argc<<"\t"<<argv[];
int i;
cout<<"total parameters in the code " << argc;
for(i=0;i<argc;i++){
    cout<<argv[i]<<endl;
}
return 0;
}
