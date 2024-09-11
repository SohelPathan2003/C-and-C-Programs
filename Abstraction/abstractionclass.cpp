#include<stdio.h>
using namespace std;

class myclass{
    public :
    virtual void show()=0;
    public:
    virtual void display()=0;
};
 class yourclass : public myclass{
    public:
    void show(){
        printf("show method");

    }
    public:
    void display(){
        printf("display method");
    }

 };

 int main(){
    yourclass obj;
    obj.show();
    obj.display();

 }

