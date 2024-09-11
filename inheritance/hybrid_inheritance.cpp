// write a program to create college details and create four method of college.
// question must solved using hybrid inheritance;

#include<iostream>
#include<string.h>

using namespace std;

class student{
    protected:

     int sid;
    char sname[20];
    int sage;
    static int count;
    float per;
    char grade[4];

    public:
        void setdetails(char name[],int age,float percentage){
           
            count++;
            sid=count;
            strcpy(sname,name);
            sage=age;
            per=percentage;

        }

        void showdata(){
            cout<<"\tid\tname\tage\tclass\n";
            cout<<"\t"<<sid<<"\t"<<sname<<"\t"<<sage<<"\t"<<"\t"<<per;
        }


};

class teacher:public student{
     public:
    void checkper(){
        int per=this->per;
        if(per>70){
          strcpy(grade,"A");
        }
        else if(per>60){
             strcpy(grade,"B");
        }
        else if(per>50){
           strcpy(grade,"C");
        }else{
            strcpy(grade,"D");
        }


         

        
    }

     void showdata(){
            cout<<"\tid\tname\tage\tpercentage\tgreade\n";
            cout<<"\t"<<sid<<"\t"<<sname<<"\t"<<sage<<"\t  "<<per<<"\t\t  "<<grade;
        }

   


};

class peon:public student{
      public:
      int age=this->age;

     void checkage(){
        if(age>25){
            cout<<"you cannot enter in class\n\n";
        }
     }
  
};

class principle:public teacher,peon{    // here create ambiguity problem means both classes comes
                                       //with same data means student data and that why at the 
                                      // when we create object of principle class then we called 
                                     // student method then compiler will get confused and generates
                                    // error..




};
int student::count=0;
int main(){
    teacher obj;

    int age;
    float per;
    char name[20];
    cout<<"Enter student details\n\n";
    cin>>name>>age>>per;

    obj.setdetails(name,age,per);
    obj.checkper();
    obj.showdata();

}