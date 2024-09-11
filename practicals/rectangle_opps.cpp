#include<iostream>


    using namespace std;
  class rectangle{
    private:
    int len,breadth;
    
    public:
    void setvalue(int len,int breadth){
        this->len=len;
        this->breadth=breadth;

    }
    void area(){
        int area=len*breadth;
        cout<<"area is\n "<<area;
    }

    rectangle(){
        len=0;
        breadth=0;
        int area=len*breadth;
        cout<<"\narea is\t"<<area;
    }

    rectangle(int len,int breadth){
        int area=len*breadth;
        cout<<"\narea is\t "<<area;

    }
    rectangle(int num){
        len=breadth=num;
        int area=len*breadth;
        cout<<"\narea is\t"<<area;
    }

  };
  
   int main(){
    rectangle obj,obj2(12,12),obj3(12);






    return 0;
   }