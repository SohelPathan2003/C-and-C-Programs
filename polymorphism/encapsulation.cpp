#include<iostream>
#include<stdio.h>

  using namespace std;

  class encapsulationexample{

    private:
    int a,b,c;
    public:
    void setvalue(int x,int y){        /* if  we think about that code here we achieved the good
                              encapsulation means we assign values to the private variable using
                              set value fuction or method and also above method or fuction where 
                              we achieved good encapsulation means we return the c to the function
                              calling means we cannot use private class member variable at outside of 
                              class that's why use setter getter method to interact with private variable
                              also we declared method as a private and used id by public class member method


     question is what is encapsulation?
     encapsulation means hide the implementation details from end user or hide the unnecessary 
     data from end user and use it via public methods or function called as encapsulation ...
     
    encapsulation means bidding of data into single entity or we can say hiding unnecessary data 
    from user we called it encapsulation. if want to hide something important from user  means
    example employee salary means only admit or can able to change employee salary other people 
    only see salary but can't change or not able to change in salary .
  
  question is how can we achieved good encapsulation in cpp?

  ans:- if we want to achieve good encapsulation in cpp then we have to make some class member's or 
  class variable as a private and use it by public function not a anyone can able to perform changes
  in private variable. if we want to use those private variable then where we usually used setter 
  getter method to achieve those private variable or work with private variable...

  question is :- what is the benefit of encapsulation in cpp?
     The major benefit of encapsulation is data security means we provide security to our data
     no one can directly used outside or class means if want to use class private member's or private
     variable then we usually used function for that and those function decides which one 
     or whom to give permission for those private variable.

  
    */

        a=x;
        b=y;

    }

    int getout(){
        return c=a+b;
    }


  };

  int main(){
    encapsulationexample obj;
    encapsulationexample *obj1=new encapsulationexample();

   obj.setvalue(12,12);
    int ans=obj.getout();
    cout<<"addition is "<<ans;


  }