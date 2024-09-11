/*
    write a cpp program to create simple program of abstraction..

*/
#include<iostream>
 
 using namespace std;

class class1{
    protected:
    int a,b;

    public:
   virtual void student1()=0;  // here we declared abstract method using virtual keyword we can 
   // create abstract method in cpp..
};
class student: public class1 {
    public:
    void student1(){
        cout<<"this is abstract method\n";
    }

};

int main(){
    student obj;
    obj.student1();
}