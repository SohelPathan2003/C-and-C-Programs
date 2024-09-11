
#include<iostream>

using namespace std;

class value{
    protected:
    int a,b;

    protected:
    virtual int getresult()=0;
    public:

    void setvalue(int x,int y){
        a=x;
        b=y;

    }


};

 class addition : public value{
    public:
    int getresult(){
        return a+b;

    }


 };

 class multiplication: public value{

    public:
    int getresult(){
        return a*b;
    }

 };

 int main(){
    int choice;
    cout<<"Enter your choice\n";

    cin>>choice;

    switch(choice){

        case 1:

        addition *obj;
        obj=new addition();
        obj->setvalue(12,12);
        int res=obj->getresult();
        cout<<"addition is "<<res;
        break;

        case 2:

        multiplication *obj1;
        obj1=new multiplication();
        obj1->setvalue(12,12);
        int mul=obj1->getresult();
        cout<<"\tmultiplication is\t "<<mul;
        break;
    }
 }
