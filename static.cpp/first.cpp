#include<iostream>


        /*
               There are three more important point to create static variable

               1) declare it in class as static 
                  syntax:
                       static datatype variable name
                
               2) again declare it out side of class using scop resolution 

                    syntax: datatype classname :: static variable name

               3) if we want to use static variable in main function then we can used it using 
               class name.

                    syntax:
                           classname :: variable

              
              note: point 1 and point 2 is important to used static those step are compulsory..
              
                     
        
        
        */
using namespace std;

class A{

    public:
    static int a;

    A(int b){
        a=b;
    }

};
  int A::a;


int main(){
   

    A obj(12);
    cout<<A::a;
}


