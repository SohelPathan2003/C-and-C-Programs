#include<iostream>
using namespace std;
   
   class A{
    public:
    int a;
    int b;
    public:
    void setval(int a,int b){
        this->a=a;
        this->b=b;
        cout<<"a = "<<this->a<<"\tb = "<<this->b;
        for(int i=0;i<5;i++){
            cout<<"hi\n";
        }
    }
   };

//      error due to protected keyword means all method or data member become protected means
// we cannot access it outside of the class.
   class B: protected A{ //all member of A class become protected means we cannot used any function out side of class
     /*
        note:
           here  A class inherits B class member  by using  public access specifier 
           means all member function of A class will become public except private members.


         2 if we inherits A class into the B class by using protected access specifier 
         the all the member of A class will become protect and protect member we cannot we 
         use out side of the class or in main function.....
   
   
   
   
   
   
   */
    public:
        B(){        // by default constructor access specifier is private please make it public
        // and then use .....
            cout<<"i am a constructor\n";

        }

    };

   int main(){
    B obj;
  
    obj.setval(12,12);

   }