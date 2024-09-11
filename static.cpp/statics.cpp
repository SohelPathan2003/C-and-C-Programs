#include<iostream>

  using namespace std;

  class statickeyword{

    private:
    static int x;
    static int y;

    public:
     static void setvalue(int a,int b){
        //this->a=a;     // we cannot use this keyword inside the static method...
        x=a;
        y=b; 
     }

     static void showdata(){
      cout<<" x = "<<x<<"   y = "<<y;
     }

  };

int statickeyword::x=0;// we must have to declare static variable outside of the class...

int statickeyword::y=0;

int main(){
   int a,b;
   a=b=12;

   statickeyword obj,obj2;

   statickeyword::setvalue(a,b); // here we called the function by using class name

    statickeyword::showdata(); 



 /* obj.setvalue(a,b); // here we called the function by object or obj, here we set the value
                    by using first the object


  obj2.showdata();*/ // whereas we called the same class function with another object.

  


    return 0;
}