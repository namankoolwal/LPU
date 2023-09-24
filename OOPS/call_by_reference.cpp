#include<iostream>

using namespace std;

int sum(int *p , int *q){
return *p+*q;
}

int multi(int *p , int *q){
return *p * *q;
}

int div(int *p , int *q){
return *p / *q;
}
main(){
int a,b;
cout<<"enter first no"<<endl;
cin>>a;
cout<<"enter second no"<<endl;
cin>>b;
cout<<"sum of two no is:"<<sum(&a,&b)<<endl;
cout<<"multiplication of two no is:"<<multi(&a,&b)<<endl;
cout<<"division of two no is:"<<div(&a,&b);

}
