#include<iostream>

using namespace std;


class parent{
    private: int id;
    private: string name;
    private: double salary;
  public:
    parent(int id,string name,double salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
    }

    public:
   void show(){
        cout<<"id\tname\tsalary\n";
        cout<<id<<"\t"<<name<<"\t"<<salary;
    }
};

class child:public parent{
     public:
     child(int id,string name,double salary):parent(id,name,salary){
        // cout<<"hello";
     }
    public:
    void show(){
        cout<<"hello jigger\n";
    }

};

int main(){

    child obj(1,"sohel",121212);
    
  obj.parent::show();
    return 0;
}