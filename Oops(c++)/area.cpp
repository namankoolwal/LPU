#include<iostream>

using namespace std;
class Area{
    protected:
    int l,w,r;
    public:
    virtual float calculateArea()=0;
    void get_length_width(){
        cout<<"enter length and width of rectangle";
        cin>>l>>w;
    }

    void get_radius(){
        cout<<"enter radius";
        cin>>r;
    }

};
class circle: public Area{
public: 
float calculateArea(){
    return 3.14*r*r;
}
};
class rectangle:public Area{
    public:
    float calculateArea(){
        return l*w;
    }
};



main(){
    circle obj1;
    rectangle obj2;
    obj1.get_radius();
    cout<<"area of circle is"<<obj1.calculateArea()<<endl;
    obj2.get_length_width();
    cout<<"area of rectangle is"<< obj2.calculateArea()<<endl;

}