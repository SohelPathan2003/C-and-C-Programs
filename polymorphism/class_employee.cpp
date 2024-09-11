#include<iostream>
using namespace std;


class Employee{
    private:
     string name;
     int id;
     int basicSal;
     float addon;


     public:
     void setPersonalInfo(string ename,int eid,int basicsalary)
     {
        name=ename;
        id=eid;
        basicSal=basicsalary;
     }
     void setProgressper(int Eprogress){

        if(Eprogress>60){
            
            addon=((basicSal/100)*30);
            basicSal=addon+basicSal;

        }

     }
     void show(){
        cout<<"\nname \t"<<"\tId " <<" \tbasicSalary\n\n ";
        cout<<name<<"\t\t "<<id<<"\t   "<<basicSal;

     }



};
int main(){
    Employee emp;
    string name;
    int id;
    float basicsal,progress;
    cout<<"Enter a name of employee\n";
    cin>>name;
    cout<<"\nEnter a id of employee\n";
    cin>>id;
    cout<<"\nEnter a basic salary of employee\n";
    cin>>basicsal;
    cout<<"\n Enter a progress percentage \n";
    cin>>progress;
    

    emp.setPersonalInfo(name,id,basicsal);
    emp.setProgressper(progress);
    emp.show();



    return 0;
}