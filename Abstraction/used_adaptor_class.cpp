/*

   Adaptor:
       all those method define in adaptor class and inherit it in another classes as per our 
       requirement. 

*/

#include<iostream>
#include<string.h>

using namespace std;

class A{
    protected:
    int eid;
    char ename[50];
    int esalary;
    int eprogress;
  
  public:
  void setvalue(int id,char name[],int salary,int progress){
   eid=id;
   strcpy(ename,name);
   esalary=salary;
   eprogress=progress;
   
  }

    public:
    virtual void increment()=0; 
    virtual void show()=0;




};

int main(){

    int salary,id,progress;
    char name[50];
    cout<<"Enter employee data id name salary progress\n";
    cin>>id>>salary>>progress>>name;



}


