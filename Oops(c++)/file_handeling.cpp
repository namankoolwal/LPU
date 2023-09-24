#include <iostream>
#include <fstream>

using namespace std ;

class Student
{
int regno ;
char name[60] ;
public:
void getdata()
{
cout << "Enter register number : " ;
cin >> regno ;
cout << "Enter the name : " ;
cin >> name ;
}
void showdata()
{
cout << regno << endl ;
cout << name << endl ;
}
};

int main()
{
fstream f1 ;
f1.open("Sunday_Objects.txt", ios::in | ios::out);

Student stud ;
cout<<"Showing the existing contents"<< endl;
f1.read((char*)&stud, sizeof(stud));
while(f1)
{
stud.showdata();
f1.read((char*)&stud, sizeof(stud));
}

int n, offset ;

// For the updation
cout << "Which Student you want to change ? (in number)" ;
cin >> n ;

offset = (n-1)*sizeof(stud) ;
cout << "Size of stud " << sizeof(stud) << endl ;
cout << "Offset Value = " << offset << endl ;

f1.seekp(offset, ios::beg);
cout << "Current pos = " << f1.tellp() << endl;

stud.getdata();

f1.write((char*)&stud, sizeof(stud));

// Reading the content after updation
f1.seekg(0, ios::beg);

f1.read((char*)&stud, sizeof(stud));
while(f1)
{
stud.showdata();
f1.read((char*)&stud, sizeof(stud));
}

f1.close();
return (0);
}
