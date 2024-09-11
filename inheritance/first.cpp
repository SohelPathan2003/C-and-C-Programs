#include<iostream>

 using namespace std;

class a{
     int val,val2;
     public: int get(){
    val=100/2*5;
    val2=300/2*5;
     }

     friend float mean(a obj);

};

float mean(a obj){
    return (obj.val+2+obj.val2+2)/2;

}

int  main(){
  
 a b;
 b.get();
 cout<<mean(b);






  return 0;

}