#include<iostream>

using namespace std;
   
   class A{
   private:
   int x;
    public:

    A(int b){

        x=b;
        
    }

    A(A &obj){      // here we accept the object of A(int b) constructor means obj1,

        cout<<"value of a "<<obj.x; // here we access the obj1's object and print the x value in
        //object3 and we get out put value of a 45......

    }

   };

   int main(){
    
    A obj1(45),obj3(obj1);

   }