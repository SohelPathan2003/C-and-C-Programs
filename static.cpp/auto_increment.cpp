/*
   Q.write a program create a class name as employee and within class class create method name as
   student_details with instance variable name as eid,ename,esalary,eexpe. id of the employee must
   be auto-increment. 


*/

#include<iostream>
#include<string.h>
using namespace std;

     class employee{
        private:
        static int eid;
        int count;
        int esalary,eexpe;
        char ename[50];

        public:
         employee(){
                eid=0;
                int count=0;
             }

         void  set_student_details(char ename[],int esalary,int eexpe){
                
                count=++eid;

                strcpy(this->ename,ename);
                this->esalary=esalary;
                this->eexpe=eexpe;
             }

             void show_details(){
                cout<<"\t"<<count<<"\t"<<ename<<"\t"<<esalary<<"\t"<<eexpe<<"\n";
             }

     };

     int employee::eid;

     int main(){
        employee obj1;
            char name[30];
            int salary,exp;
        employee obj[5];

        for(int i=0;i<5;i++){
            cout<<"\nEnter student details name salary experience\n\n";

            cin>>name>>salary>>exp;
            obj[i].set_student_details(name,salary,exp);
        }

        cout<<"\tid\tname\tsalary\texperience\n\n";
        for(int i=0;i<5;i++){
            obj[i].show_details();
        }


     }