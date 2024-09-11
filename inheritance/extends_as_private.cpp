#include<iostream>
using namespace std;

 class A{
    public:
    int a,b;
    
 };

 //class B:private A{//here we inherits A class in B class as private
 class B:public A{ 
    public:
    B(){
        a=b=10;
    cout<<"a = "<<a<<"  b  "<<b;
    cout<<"\n";

    }
 };
 
 class C:public B{
     /*  here we cannot use instance variable of A class in C class because we
 inherits A class in B class as a private. after that we inherits B class in C class as 
 public but A class inherits as private that's why instance variable of A class will be act as
 private variable in B class means we can use those variable in B class but we cannot use it 
 out side of class....
 
 */ 
    public:
    C(){
        a=b=10;
        cout<<"a = "<<a<<"  b  "<<b;
        
    }
 };

 int main(){
    B obj;
    C obj2;
 }