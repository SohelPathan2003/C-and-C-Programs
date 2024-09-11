#include<iostream>
#include<string.h>
/*

write a program create a class name as studentmarks and within that class create two function
name as setmarks() and getpercentage().and inherit it class into the 5 students class.
and find the all students percentage using 6th class name as perform_percentage ();

*/

using namespace std;

  class student{
    protected:
    int sum;
    int *mark;

    public:
    void setmarks(int a[]){

        mark=a;

    }

    virtual int getdata()=0;


  };

  class percentage:public student{
    public:
    int getdata(){
       sum=0;
      for(int i=0;i<5;i++){
        sum=mark[i]+sum;
      }

     int percentage=sum/5;
     return percentage;
    }

  };

  class total_marks:public student{
   public:
   int getdata(){
     sum=0;
    for(int i=0;i<5;i++){
      sum=sum+mark[i];
    }
    return sum;
   }
    

  };


  class maxfind:public student{

    protected:
    int max;
      public:

      int getdata(){
         max=mark[0];
        for(int i=0;i<5;i++){

          if(max<mark[i]){
            max=mark[i];
          }

      }
      return max;
      }
  };

  class passORfailed:public student{

    public:
    int getdata(){
      sum=0;
      for(int i=0;i<5;i++){
        sum=mark[i]+sum;
      }

      float per=sum/5;
      if(per<35){
        return 0;
      }else{
        return 1;
      }

    }
  };

class count_min:public student{
  public:
  int getdata(){
    int min=mark[0];
    int count=0;
    for(int i=0;i<5;i++){
      if(mark[i]>50){
        count++;

      }
    }
    return count;
  }


};

class perform_action{
  public:
  void perform(student *obj){
  int result =  obj->getdata();

  cout<<"\nresult is "<<result;
  }
};

int main(){

    student *obj;
    perform_action per_ac;

    percentage per;
    total_marks tot;
    maxfind m;
    passORfailed p;
    count_min cn;

    cout<<"\nEnter 5 subject marks \n";
    int a[5];
    for(int i=0;i<5;i++){
      cin>>a[i];
    }

    cout<<"\n 1 for overall percentage \n";
    cout<<"2 for total marks\n";
    cout<<"3 for maximum mark in which subject\n";
    cout<<"4 for student pass or failed\n";
    cout<<"5 for how many subject you scored below 50 marks\n";

   cout<<"enter your choice\n";
   int choice;
   cin>>choice;
    switch(choice){
      case 1:
    
      obj=new percentage();
      obj->setmarks(a);
      per_ac.perform(obj);
      
      break;
      case 2:

      obj=new total_marks();
      obj->setmarks(a);
      per_ac.perform(obj);


      break;
      case 3:
      obj=new maxfind();
      obj->setmarks(a);
      per_ac.perform(obj);



      break;
      case 4:
      obj=new passORfailed();
      obj->setmarks(a);
      per_ac.perform(obj);
      break;
      case 5:
      obj=new count_min();
      obj->setmarks(a);
      per_ac.perform(obj);
      break;

    }
  return 0;
}
