#include<iostream>
#include<string.h>
using namespace std;

class Employee{

    public:
   Employee(int salary,char name1[]){

      cout<<"\nEmployee name is "<<name1<<"   and salary is  "<<salary;
      cout<<"\n\n";
    }

};

class Developer:public Employee{
    public:
    Developer(char project_name[],int salary,char name1[]):Employee(salary,name1){

        cout<<""<<"\n project name is "<<project_name<<"\n";
       
    }
};

class programmer:public Developer{
    public:
     
     programmer(char language[],char project_name[],int salary,char name1[]):Developer(project_name,salary,name1)
     {
        cout<<"\nlanguage known   "<<language<<"\n\n";

     }
};

int main(){
    char lang[20],name[20],projectname[20];
    int salary;


    cout<<"Enter programming language\n\n";
    cin>>lang;
    cout<<"\nEnter project name\n";
    cin>>projectname;
    cout<<"\n Enter salary\n";
    cin>>salary;
    cout<<"\n Enter employee name\n\n";
    cin>>name;


    programmer obj(lang,projectname,salary,name);




    return 0;
}