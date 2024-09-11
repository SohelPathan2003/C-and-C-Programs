/*example :- Create class name as Permission and create class variable name as int age,

float salary and create two function name as void setage(int age); and void givepermission();
and check person valid for vote or not..
Note :- write a program using good encapsulation .......
*/



#include<iostream>

      using namespace std;
  
  class Permission{
    private:
    int id;
    float salary;

    public:
    void setage(int age,float salary){
        this->id=id;
        this->salary=salary;

    }

    void givepermission(){
        if(id<=10){
            cout<<" you are id is valid\t"<<salary;
        }else{
            cout<<"you are id is invalid";
        }
    }

  };


  int main(){
    Permission obj;
    int id;
    float salary;
    cout<<"enter id and salary of employee\n";
    cin>>id>>salary;

    obj.setage(id,salary);
    obj.givepermission();

    return 0;
  }

