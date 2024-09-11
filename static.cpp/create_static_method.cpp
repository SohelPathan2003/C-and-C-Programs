#include<iostream>
#include<string.h>


using namespace std;

  class A{
   public:
   static int a;      

    public:

    static void method(){
        a++;        
        cout<<a;
    }


  };

  int main(){
    A::method();

  }