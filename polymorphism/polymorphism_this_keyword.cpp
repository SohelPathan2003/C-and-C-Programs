#include<stdio.h>
#include<iostream>
using namespace std;

class class1{
    private:
    int a,b,temp;
    public:
    void setvalue(int a,int b){

    //     this->a=a;       if we have same name with same data type then we have to use
                        //  this keyword because we want to reflected changes in class variable or local variable means method
                        // level variable don't allow to class variable if they are same if we want to use class variables then we
                        // have to refer current running object through this keyword.
                       //   if we didn't write this or didn't use this keyword then it will be not reflected into the private 
                       //member or class variable;
    //    this-> b=b;

            // a=a;     here is the example of that if write like that because it will gives
                    // first priority to the local variable or its own variable that why our change 
                   //  can't reflected into the class variable or instance variable.
            // b=b;
        
    }
    void getans(){
        cout<<"a+b is "<<a+b;
    }
};

int main(){
    cout<<"enter a two number's\n";
    int a,b;
    cin>>a>>b;
    class1 obj;
    obj.setvalue(a,b);
    obj.getans();
}