#include <iostream>
#include <cmath>

using namespace std;

//PASSING BY VALUE, PASSING BY REFERENCE

int AddSum(int *x, int *y)
{
cout << "Function is called \n";
return (*x + *y) ;
}

int main()
{
int t, a = 50, b= 100 ;
t = AddSum(&a, &b);
cout << "(Passibg reference) Sum = " << t << endl;
return 0;
}


#include <iostream>
using namespace std;
class Student
{
int RegNo ;
static int count ;
public:
Student()
{
count = count + 1 ;
}
static int show()
{
return (count);
}
};
int Student::count = 0 ;
int main()
{
Student s1, s2, s3, s4, s5 ;
cout << "No of objects are = " << Student::show() << endl;
return 0;
}

