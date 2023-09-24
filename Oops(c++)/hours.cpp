#include <iostream>
using namespace std;

class student
{
int hours, minutes ;
public:
student(int x, int y) { hours = x ; minutes = y ; }

operator int()
{
int temp ;
temp = hours * 60 + minutes ;
return (temp);
}
};
int main()
{
student s1 (5, 30);
float min ;
min = s1 ;
cout << "Total minutes = " << min << endl;
}

