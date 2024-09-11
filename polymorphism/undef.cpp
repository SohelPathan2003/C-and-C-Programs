#include<iostream>
#include<string.h>

// call by value means we have to reflect changes into the actual value that's why we pass reference
// object and the time of definition where we create object of employee class note: object must be
// pointer because at the time of calling we pass reference of object that why we have to create 
//pointer object to store the reference of object.......
using namespace std;

     
//                 ****** here we will see that call by reference *******

// class employee{
//     private:
//     char name[100];
//     int id;
//     int sal;
//     public:
//     void setname(char name[]){
//         strcpy(this->name,name);
//     }
//     char* getname(){
//         return name;
//     }
//     void setid(int id){
//         this->id=id;
//     }
//     int getid(){
//         return id;
//     }
//     void setsal(int sal){
//         this->sal=sal;


//     }
//     int getsal(){
//         return sal;
//     }

// };
// class incrementsalary{
//     public:
//     void incrementsal(int progress, employee *e){
//         if(progress>70){
//           float inc=(((e->getsal())*30)/100);
//          float addon= e->getsal()+inc;
//           e->setsal(addon);
          

//         }
//     }

// };
// int main(){
//     employee *e=new employee();
//     char ch[100]={"sohel"};
//     e->setname(ch);
//     e->setid(1);
//     e->setsal(9800);
//     cout<<"before increment \n";
//     cout<<e->getname()<<"\t"<<e->getid()<<"\t"<<e->getsal();
//     incrementsalary ie;


//     ie.incrementsal(80,e);     // here we pass the reference variable that why we have to
//     /* create pointer object in function definition then changes will update into the the actual
//     value */
//     cout<<"\n\nafter increment the salary\n\n";
//     cout<<e->getname()<<"\t"<<e->getid()<<"\t"<<e->getsal();



    

// }




//                  ******  now we will see that call by value  *******

class A{
    private:
    int id;
    char *name;
    float sal;
    

    public:
    void setname(char *name){
        this->name=name;

    }
    char *getname(){
        return name;

    }
    void setid(int id){
        this->id=id;

    }
    int getid(){
        return id;
    }
    void setsal(float sal){
        this->sal=sal;
    }
    int getsal(){
        return sal;
    }

};

class B{
    int inc,addon;
    public:
    void incrementsalary(int progress,A e){
        if(progress>70){
            inc=e.getsal()*30/100;
            addon=e.getsal()+inc;
            cout<<"\n\nyou were call using call by values that's why value didn't updated\n";
        }
    }
};

int main(){
    A obj;
    char ch[100]={"sohel"};
    obj.setid(1);
    obj.setname(ch);
    obj.setsal(800);
    cout<<"\n\nBefore increment the salary of employee\n";

    cout<<obj.getid()<<"\t"<<obj.getname()<<"\t"<<obj.getsal();



    B obj2;

    obj2.incrementsalary(80,obj);

    cout<<"\n\nAfter increment the salary of employee\n\n";

    cout<<obj.getid()<<"\t"<<obj.getname()<<"\t"<<obj.getsal();




}