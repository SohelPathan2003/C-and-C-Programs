#include<iostream>

using namespace std;

class myclass{
    private:
    int id;
    string name;
    double salary;
   
   public:
    void setvalues(int id,string name,double salary){
        this->id=id;
        this->name=name;
        this->salary=salary;
        
    }

   public:
    void show(){
        cout<<"hi this is me\n";
    }
    // void show(){
    //     cout<<"hello this is also me\n";

    // }

};
int main(){

    myclass obj;
    obj.show();
    obj.setvalues(1,"sohel",1200);
return 0;

}