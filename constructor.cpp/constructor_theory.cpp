/*
 what is constructor?
  constructor is same like as function but without return type it will get executed at the time of
  object creation......

  what are the type of constructor???????
   there are three type of constructor:-

    1)default constructor
    -> default constructor means it is constructor without having argument or parameter.
    it will get executed whenever object created....
    
    Example:-

*/

      // default constructor example

      #include<iostream>
      #include<string.h>

      using namespace std;
    
  /*  class A{
        public:

        A(){        // it is default constructor created at the time of object create means 
                   // A obj line executed.....

            cout<<"i am default constructor\n\n";
        }
    };
    int main(){
       A obj;
     
        return 0;
    }

    */


    
  /* 
                    2)parametrized constructor

    Q.what is parametrized constructor?

     parametrized constructor means those constructor who has at least one parameter 
     or if we have parametrized constructor then we have to pass argument or value at the 
     time of object creation with (argument)....

     Q. can we performed constructor overloading in parametrized constructor....

       Yes we can performed constructor overloading if we want to performed constructor over
       loading in cpp we have to give same name but different parameter or sequence of parameter
       or we can say order of parameter......

    Q. can we performed constructor overriding in cpp

        No we cannot performed constructor overriding in cpp or any programming
         because if try to performed overriding in constructor firstly it will not possible
         because if we want to performed overriding then we have to create two class with same name
         or we cannot create two class as same name and the main rule of constructor,
         class name and constructor name must be same...

    Q can we write static constructor in cpp.

       No we cannot write static constructor because as per static rule he get memory before creating
       object whereas constructor must have to create object of class that why we cannot create 
       static constructor both are opposite to each other .


                        Example of parameterized  :-
  */

  /*class A{

    public:
    A(int a,int b){
        // return(a+b);     we cannot return any value from constructor .....

        cout<<"\n\naddition is "<<a+b;

    }

    A(int a){
        cout<<"\n\nsquare of first is  "<<a*a;

    }

    A(){
        cout<<"\n\ni am default constructor\n\n";
    }




  };

  int main(){
    A obj;       // here we called default constructor means 100 line to 102 line....



    A obj1(12,12);      // here we called parameterized constructor who has two integer type para
                       // meter ....line number 79 to 84


   A obj2(5); // here we called parameterized constructor who has one integer type
            // parameter line number 86      89
  }

  */



   /*
   
           3)copy constructor :- here we copy the constructor means we copy their object
           and passed it to the whom you want to send and note: if send copy of constructor 
           then we must have "classname &objectname" as parameter...........
                 or
           means we pass the one object to another object for uses the previous object content.
           


           note: In this problem we have to write both constructor in one class we cannot write 
           both constructor in fact cannot override constructor because of both classes having
           different name  and the rule of constructor is class name and constructor name must 
           be same.

            Example:-
   
   */

         // write  a program to create a class name as a employee and within a class create 
        // three constructor in first constructor set the value like empid ,empname,empsalary,empexperience 
       // whereas copy the first constructor in the second constructor check the if experience 
      // 5 year or more than 5 than give them increment 30% extra of there salary or must be keep
     // instance variable as a private and third print previous data and updated data.......


    #include<string.h>

     class employee{

        private:
        int id,salary;
        float exp;
        char name[100];

        public:

        employee(int id,char name[],float exp,int salary){

            this->id=id;
            strcpy(this->name,name);
            this->exp=exp;
            this->salary=salary;

        }
        public:

        employee(employee &obj){
         float exp1=obj.exp;
         int sal=obj.salary;

         if(exp1>=5){
            sal=((sal*30)/(100))+obj.salary;

         }
         salary=sal;
         id=obj.id;
         strcpy(name,obj.name);
         exp=exp1;



        }
        

        public:
        employee(employee &obj,employee &obj1){

            // now we have to print here both value updated and before updated

            cout<<"Before increment salary\n\n";

            cout<<"\t"<<"id\tname\texperience\tsalary\n";


            cout<<"\n\t"<<obj.id<<"\t"<<obj.name<<"\t  "<<obj.exp<<"\t \t  "<<obj.salary<<"\n";

            cout<<"\nAfter increment salary\n\n";

             cout<<"\t"<<"id\tname\texperience\tsalary\n";
            cout<<"\n\t"<<obj1.id<<"\t"<<obj1.name<<"\t  "<<obj1.exp<<"\t \t"<<obj1.salary<<"\n";

            






        }


     };

       int main(){

        int id,salary;
        float exp;
        char name[50];

        cout<<"\nEnter a employee details id name exp salary \n\n";
        cin>>id>>name>>exp>>salary;


        employee emp(id,name,exp,salary);    // here we have to use this object value in another
        //constructor...

        employee obj1(emp);
        employee obj2(emp,obj1);
       }