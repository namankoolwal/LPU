#include<iostream>

using namespace std;
int sum(int a,int b,int c){
return a+b+c;
}

main(){
int x,y,z;
cout<<"enter three no.:";
cin>>x>>y>>z;
cout<<"sum of three no is :"<< sum(x,y,z);
}
