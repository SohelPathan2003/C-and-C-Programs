#include<iostream>
#include<string.h>
using namespace std;

class A{
    protected:
    int a;
    char ch[50];

    public:
    A(int z){
        a=z;
       strcpy(ch,"sohel");
       cout<<"i am a constructor of A\n";
       cout<<"value of z =\n "<<a<<"\n";
    }

};
class B:public A{ 
   public:
   B():A(10){
    cout<<"i am constructor of B";
   }


};

int main(){
    B obj;

    return 0;
}


