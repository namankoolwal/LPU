#include <iostream>
#include <exception>
#include <typeinfo>

using namespace std;

void sum(int x, int y)
{
cout << x + y ;
}

int main ()
{
try
{
sum(10,30);
}

catch (exception& e)
{
cout << "Error Message is caught : " << e.what();
}

return 0;
}
