# include<iostream>
using namespace std;
class Box{
public:
    double length;
    void setwidth(double wid);
    double getwidth(void);
private:
    double width;
};

double Box::getwidth(void){
return width;
}
void Box::setwidth(double wid){
width=wid;
}
int main(){
Box box;
box.length=5.0;
cout<<"length of box:"<<box.length<<endl;
box.setwidth(5.0);
cout<<"width of box:"<<box.getwidth()<<endl;
return 0;
}
