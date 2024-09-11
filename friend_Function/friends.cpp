#include<iostream>

using namespace std;
class A{
    int a,b;
    public:
    void setvalue(){
        a=b=12;
    }
    friend void show();
};
void show(){
    cout<<"addition is ";
    // cout<<a+b;    // we cannot use class member outside of class or in friend function  
}
int main(){
A *obj=new A();
 obj->setvalue();
return 0;
}