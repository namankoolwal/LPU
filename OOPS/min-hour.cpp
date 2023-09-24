#include <iostream>
using namespace std;

class TimeClass
{
private:
int hours, minutes ;
public:
TimeClass(int x, int y)
{
hours = x ; minutes = y ;
}
int getData()
{
return ( hours * 60 + minutes);
}
};

class MinutesClass
{
private:
int totalminutes ;
public:
MinutesClass(TimeClass tc)
{
totalminutes = tc.getData();
}
void show()
{
cout << "Total minutes = " << totalminutes << endl;
}
};

int main()
{
TimeClass Tobj (3, 40) ;
MinutesClass Mobj (Tobj) ;
Mobj.show();
}