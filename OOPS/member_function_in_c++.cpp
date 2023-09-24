#include<iostream>
using namespace std;
class find_sum
{
public:
    int x,y;
    void get_data();
    int disp_sum();
};
void find_sum::get_data()
{
    cout<<"Enter two number";
    cin>>x>>y;
}
int find_sum::disp_sum(){
return x+y;
}
main(){
find_sum sum1;
sum1.get_data();
cout<<"sum of entered no is "<<sum1.disp_sum();
}
