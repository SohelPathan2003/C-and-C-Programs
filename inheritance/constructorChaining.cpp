#include<iostream>
using namespace std;


class myclass{
    public:
    myclass(myclass &obj){ 
        cout<<"i am a default constructor\n";
     }

     myclass(myclass &obj,int a){
        cout<<"i am  parametrized constructor with integer type "<<a<<"\n";
     }
     myclass(string name){
        cout<<"i am parametrized constructor with string data type"<<name<<"\n";
     }
};
int main(){

    myclass obj("sohel");

    myclass obj1(obj);
    myclass obj2(obj1,12);

    return 0;
}
