/*

  what is static function?
      a static function means a function we can called it by using class name or also using object
      is known as static function.static function can work with only static variable 
      means we cannot create no static variable in static function.....


      why we used static function?
      if we want to increment some value constantly or it will not depend on class instance variable
    or not depend on class object then we will use static function;


*/


#include<iostream>
using namespace std;


    class A{
        public:

        static int x;
         int b;

        static void show(){

          // b=200;  
          /*     here we try to used instance variable in static method compiler will generate

           compile time error....


           why we cannot use instance variable in static function ?
            because for the instance variable we have to create object to allocate the memory for 
            instance variable or use to that instance variable...
            or whereas static variable no need to create object we can access it using class name..


            static variable present in static section whereas instance variable present in stack
            and for allocating memory to the instance variable we must have to create object of that 
            class....or whereas for static variable allocated memory at time of execution ....

           
           
           
           */





            x=200;
            cout<<"i am a static function\n"<<x;

        }


    };

    int A::x=0;

    int main(){
        A obj;

        obj.show();
    }