#include<iostream>
using namespace std;

// WAP to write class name as rectangle with a following methods and write its logics.

class Rectangle{
    private:
    float length,width,Area;

    public:
    void setlengthwidth(int len,int wid){
        length=len;
        width=wid;

    }
    void showArea(){
        Area=length*width;
        cout<<"\n Area of rectangle is "<<Area;

    }
};
int main(){
    float len,wid;
    Rectangle obj;
    cout<<"enter length and width of rectangle\n";
    cin>>len>>wid;

    obj.setlengthwidth(len,wid);
    obj.showArea();
}