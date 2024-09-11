#include<iostream>

using namespace std;

class bank{

    private:
    int id;
    string name;
    double amount;
      public:
    bank(int id,string name,double amount){
        this->id=id;
        this->name=name;
        this->amount=amount;
    }
     int getid(){
        return id;
     }
     double getamount(){
        return amount;
     }
     string getname(){
        return name;
     }

    bank(bank &obj){
        cout<<"id\tname\tamount\n";
        cout<<obj.id<<"\t"<<obj.name<<"\t"<<obj.amount<<"\n";
    }

    bank(bank &obj1,int i){
       int id1=obj1.getid();
        double am;
        if(i==id1){
          am =obj1.getamount();
            am=am+200;
        }
        id=id1;
        name=obj1.getname();
        amount=am;

    }




};

int main(){
    
    bank obj(1,"sohel",1212.12);

    bank b2(obj,1);

    bank obj3(b2);

    return 0;
}