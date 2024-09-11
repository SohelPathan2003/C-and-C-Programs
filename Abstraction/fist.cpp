/*
     Q.what is abstraction ?
     abstraction means we hide the data or implementation details from end user.
       in other word those function or method who not have any definition. 

     Q.what are the benefit of abstraction?
      there are two major benefit of abstraction in cpp:-
       1) customized  the method or function as per our requirement using inheritance.

       2) we can achieve dynamic polymorphism using abstraction.
          dynamic polymorphism ==  loose coupling 

       if we want to achieve dynamic polymorphism by using abstraction then we have to declared
       method as an abstract inherit it in child classes then we used loose coupling;
       we have to create reference variable of abstract class, in that variable we store the address
       of class whom you want to call by using abstract class reference.

       syntax:
           vehicle *v;
           v=new bike();
           v=new car();
           v=new cycle();

           v is a reference variable of vehicle class(abstract class note: we cannot create object
           of abstract class but we can create reference variable.) and create object of any other class
           and  store its address in it.using this technique we can use loose coupling.

       note :
        we cannot create object of abstract class but we can creates its reference variable 
        through the reference variable we can achieved dynamic polymorphism or we can say
        loose coupling in cpp.

        what is loose coupling?
        loose coupling means function are do not dependent on only one object.
        if means we don't known which method wants to use at the run time then we use loose coupling.
        if we want to decide function calling at run time then we will use loop coupling technique.

        what is the benefit of loose coupling?
        there are the major benefit of loose coupling is we create single method and called it
        from various object.

                       or
     the major benefit of loop coupling is if we want to pass any child class object to function 
     or if want to decide function calling at time the we will use it..

        syntax of reference variable:
             abstract_class *obj=new inherited_class();//
             inherited class must be non abstract.


note: if we write any abstract method in class then class is considered as a abstract class we 
cannot create its object.

       if we want to access those abstract method or function we have to use inheritance.
       we access or customized those method as per our requirement.
               
               or if we declared method as an abstract or pure virtual method then we can
               override those methods who declared as a abstract or pure virtual method

     

     Q.by which keyword we declared method is abstract.

     by using virtual keyword we can declared method as a abstract.
     syntax:
       virtual return_type method_name(parameter)=0;


     Q what is constructor ?
      constructor means it is like as method but without return type or it will get executed
      when we create object of that class , even if have parametrized constructor then we
       can pass parameter to the constructor at the time of object creation.




     Q. what destructor?
     destructor means as name suggest it will destroy the object after object end or about to
     die. means those memory who created by constructor destructor has a responsibility to 
     deallocate the memory of constructor.
     
     Example:-

*/

#include<iostream>
#include<string.h>
using namespace std;

/*class abs{
    protected:
    int a;
    char b;
    public:
    virtual absmethod()=0;

};

int main(){
      abs obj;      // here in this case we cannot create object of that class  who contain 
      //min one abstract class or virtual class in cpp.......
     // obj.absmethod();
      

     return 0;
}

*/

class abs{
     protected:
     int a;
     char b[50];

     // public:
     // virtual absmethod()=0;

};


class childclass:private abs{        // here we write private means all the data member of 

// abs class will converted into private member function means latter on we cannot able to use it
// here if we declared inherits as a public or protected the we will be able to used it by protected
//we can used it by using inheritance or by public we can used it out side of the class or inherits

     public:
     void setvalue(){
           a=12;
          strcpy(b,"sohel");
          printf("%d  %s",a,b);
     }
    

};

class thirdclass:public childclass{
     public:
     // void set2value(){
     //      a=12;
     //     strcpy(b,"pathan");
     //      printf("%d      %s",a,b); // here we get a compiler time error because we try to use
     //      // private instance  variable of child class
     // }
     
};

int main(){
    thirdclass obj;
    obj.setvalue();

}