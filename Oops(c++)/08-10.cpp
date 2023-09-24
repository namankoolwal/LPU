#include <iostream>
#include <fstream>
using namespace std ;

class student
{
int regno ;
char name[25];
public:
void putdata()
{
cout << "Register Number : " << regno << endl ;
cout << "Student Name : " << name << endl ;
}
int get_regno()
{
return (regno);
}

};

int main()
{
student s ;

fstream f1 ;
f1.open("Oct8file.txt", ios::in);
int rno, n = 1, status = 0;

cout << "Enter register no :: " ; cin >> rno ;

f1.read((char*)&s, sizeof(s));
while (f1)
{
if ( s.get_regno() == rno )
{
cout << "It is exist in - record " << n << endl;
status = 1 ;
break ;
}
f1.read((char*)&s, sizeof(s));
n = n + 1 ;
}
if (status == 0 )
{
cout << "RECORD DOES NOT EXIST, SORRY" << endl ;
}
f1.close();
}