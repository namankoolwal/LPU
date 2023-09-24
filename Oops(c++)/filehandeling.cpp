#include<iostream>
#include<fstream>

using namespace std;

int main(int argc, char*argv[])
{
int i=0,sum=0;

while(i <argc)
{
sum = sum+atoi(argv[i]);
i=i+1;
}
cout<<"sum is: "<<sum<<endl;
}
