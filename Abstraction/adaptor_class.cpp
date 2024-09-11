#include<iostream>
#include<string.h>

using namespace std;

class A{ 
    protected:
    int a;
    int b;
    char name[50];
    public:
    void set_value(int x,int y,char ch[]){
        a=x;
        b=y;
        strcpy(name,ch);
    }

    virtual void show()=0;
    virtual void add()=0;
    virtual void mul()=0;

    /*
    Note: 
          if we inherit class or abstract class in another class then we have to define all this three
          method in it.if we do not want to use three methods in one class then we have to define
          those all block as an empty methods.
          it is not an good approach to solved the problem. instead of that we have to create one class
          name as adaptor class and inherits the abstract class in it define those all method in it
          after that inherit this adaptor class as per our requirement....
    
    */
};


/*class B:public A{

    public:
    void show(){
        cout<<"A =\t "<<a<<"\tB = "<<b<<"\t name = "<<name;
    }

   
//it will generate this type of error if we do not define all method in inherited class....


    pure virtual function "A::add" has no override
adaptor_class.cpp(45, 7): pure virtual function "A::mul" has no override



};
*/


class B:public A{

    public:
    void show(){
        cout<<"A =\t "<<a<<"\tB = "<<b<<"\t name = "<<name;
    }

    void add(){
        cout<<"\n\naddition is  "<<a+b;

    }

    void mul(){
        cout<<"\n\nmultiplication is    "<<a*b;
    }

};

int main(){

    char c[50];
    int a,b;
    cout<<"Enter a name\n\n";
    gets(c);
    cout<<"\n Enter two numbers\n";
    cin>>a>>b;
    B obj;
    obj.set_value(a,b,c);
    obj.show();
    obj.add();
    obj.mul();
}
