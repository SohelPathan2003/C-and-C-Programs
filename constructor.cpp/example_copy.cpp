#include<iostream>
#include<string.h>
using namespace std;

   /*
    Q. write a program to copy the constructor details in another constructor and print
    student details.

   
   */

  class student{
     private:
     char sname[100];
     int sid;
     int fees;
     char grade;

     public:
      student(int sid,char sname[],int fees,char grade){
        cout<<"i am in constructor\n\n";
        this->sid=sid;
        strcpy(this->sname,sname);
        this->fees=fees;
        this->grade=grade;



      }


      public:
      student(student &obj){
        cout<<"\tid\tname\tfees\tgrade\n";
        cout<<"\t"<<obj.sid<<"\t"<<obj.sname<<"\t"<<obj.fees<<"\t"<<obj.grade;
      }

  };

  int main(){
    char a='a';
    student object1(1,"sohel",2000,a);
    student object2(object1);
  }