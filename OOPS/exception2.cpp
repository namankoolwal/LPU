#include <iostream>
#include <exception>

using namespace std ;

int main()
{
int A[5];
for (int i=0; i<5; i++)
{
cin >> A[i];
}
cout << "Random Print \n" ;
try
{
cout << A[8] << endl ;
}


catch (exception &e)
{
cout << "Please follow the rules, try again" << endl;
cout << e.what() << endl ;
}

return 0;
}