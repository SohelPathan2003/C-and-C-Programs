#include<iostream>
#include<string.h>

using namespace std;

class pojo{
    
    private:
    string name;
    int id;
    int salary;
    public:
    void setname(string name){ 
        this->name=name;
    }

   public:
    void setid(int id){
        this->id=id;
    }
    public:
    void setsalary(int salary){
        this->salary=salary;
    }

    public:
    string getname(){
        return name;
    }

    public: 
    int getid(){
        return id;
    }
      public :
      int getsal(){
        return salary;
           }
};



class increments{
    private:
    pojo obj;
    int inc;
    public :
    void setincrement(int inc,pojo obj);

    public:
    int getincrement();
    
};

void increments:: setincrement(int inc,pojo obj){
        this->inc=inc;
        this->obj=obj;
    }


 int increments:: getincrement(){
        float bonus,total,sal;
        sal=obj.getsal();
        if(inc>60){ 
            bonus =sal*30/100;
            sal+=bonus;
        }
        return sal;
    }

int main(){

 pojo obj;
obj.setname("sohel");
obj.setid(1);
obj.setsalary(5000);

increments obj2;
cout<<"\n Before increment the salary\t"<<obj.getsal()<<"\n";

obj2.setincrement(80,obj);
cout<<"\n After increment the salary\t"<<obj2.getincrement()<<"\n";

}