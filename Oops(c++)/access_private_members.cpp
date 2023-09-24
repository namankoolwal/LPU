#include<iostream>
using namespace std;
class sample
{

private:
    int a ;
    void get_data()
    {
        cout<<"enter value "<<endl;
        cin>>a;
    }
public:
    void show_data()
    {
        get_data();
        cout<<"value of a is "<<a;
    }
};
main()
{
    sample obj;
    obj.get_data();
    obj.show_data();
}
