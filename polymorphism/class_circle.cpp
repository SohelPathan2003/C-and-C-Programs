#include<iostream>
using namespace std;

//       *** WAP to create the class name as circle with a following methods***
                // first way to solved this problem

class circle{
    private:
    float radius,pi=3.14,area;
    public:
  void  setradius(float rad){
    radius=rad;
    
  }
  public:
  void showArea(){

    area=pi*radius*radius;
    cout<<" \narea of circle is \t"<<area;
  }
};

int main(){

    circle obj;
    float radius;
    cout<<"Enter a radius\n";
    cin>>radius;
    obj.setradius(radius);
    obj.showArea();



    return 0;
}



