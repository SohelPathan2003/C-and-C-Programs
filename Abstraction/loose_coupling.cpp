#include<iostream>

using namespace std;

class value{
    protected:
    int a,b;

    public:
    void setvalue(int x,int y){
        a=x;
        b=y;
    }

    virtual int getvalue()=0;     /* 
    
abstract method..... the drawback of abstract class if we declare 10 method as abstract and we
inherit it in child classes then we have to define all 10 methods in inherited class.
it will be not necessary all those method we will ued in any child class , if want to used it in
child class or few method we want used or define then we have to define another method as empty block.
if we did'nt want to used those all methods at a time then we have to define those
 all abstract method as empty method in one class whose known as adaptor class or intermediator class.
 it will not good approach to solved the any problem then designer introduced a intermediator
class or adapter class .using this intermediator class we can define all those abstract method 
in our intermediator class inherits the intermediator class to the required class.

  
   */

};


   class add:public value{
    public:

     int getvalue(){
        return a+b;
    }

   };

   class mul:public value{

    int getvalue(){
        return a*b;
    }

   };

      class perform{
        public:
       void perform_operation(value *obj){
            int result=obj->getvalue();

            cout<<"\n result is \t"<<result;

        }

      };


      int main(){


        value *obj;
        obj=new add();
        obj->setvalue(12,12);      // here we set the value in add class setvalue method
      
       perform per;
       per.perform_operation(obj);      

       obj=new mul();
        obj->setvalue(12,12);
        per.perform_operation(obj); // here this method decide to which object do you want to 
        // access. designer called it dynamic polymorphism..means its decided at the run time


      }