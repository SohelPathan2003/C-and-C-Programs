//create static method...

#include<iostream>
  using namespace std;
class D{

   public:
    static void show(){

        // static int x=20;
        cout<<"I am Static mehtod";
    }
};
  int main(){
    
    D::show();

  }