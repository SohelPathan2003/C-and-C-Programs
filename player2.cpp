#include<iostream>

using namespace std;

class players{
    private:
    int id;
    string name;
    int runs;
    public:
      void setdata(int id,string name,int runs){
        this->name=name;
        this->id=id;
        this->runs=runs;
      }

      void show(){
      
        cout<<name<<"\t"<<id<<"\t"<<runs<<"\n";
      }

      int getruns(){
        return runs;
      }

};

int main(){

     int id,runs;
     string name;
     players obj[5],t;
    
     for(int i=0;i<5;i++){
         cout<<"Enter name and id , runs\n";
        cin>>name>>id>>runs;
        obj[i].setdata(id,name,runs);
     }
     cout<<"\nbefore sorting\n";
     cout<<"name\tid\truns\n";
     for(int i=0;i<5;i++){
        obj[i].show();
     }
 printf("\nAfter sorting players by their runs\n");
     int temp,temp2;
     for(int i=0;i<5;i++){
        temp=obj[i].getruns();
        for(int j=i+1;j<5;j++){
            temp2=obj[j].getruns();
            if(temp>temp2){
               t=obj[i];
                obj[i]=obj[j];
                obj[j]=t;
            }
        }
        obj[i].show();
     }
        
return 0;
}