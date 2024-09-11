// write a program create a class and inherits parent class properties in child class .
// and prevent to inherits child class child's grandclasss.
#include<iostream>
#include<string.h>
using namespace std;
     class prevent {
      public:        // note : we cannot use private variable or method in inherited class or
      // child class

       int id;
       char name[100];
       public:
       void setvalue(){
        this->id=12;
        strcpy(this->name,"sohel");
       }
         public:
         int getid(){
            return id;
         }
         public:
         char * getname(){
            return name;
         }
     };

     class child:public prevent{
        public:
        child(){
            cout<<"hello i am in child class\n";
        }
        
     };
     int main(){
        child obj;
        obj.setvalue();
       int id= obj.getid();
       char *name=obj.getname();
       cout<<"\n id is "<<id<<"\tname is "<<name;
    
       
      
     }
