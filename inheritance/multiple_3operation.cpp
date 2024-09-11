#include<iostream>
#include<string.h>
using namespace std;


/* perform three operation in three individually class means create three class name as A B C and create 
 and perform three operation individually 
 1)find reverse;
 2)prime or not
 3)find strong or not..

    */

   class A{
    // find max

     protected:
     int num;
     public:
     A(){
        cout<<"\ni am default\n";
     }
     A(int a){
        num=a;
     }
     public:
     void reverse(){
        int rem,temp,c=0,res=0;
        temp=num;
        while(temp!=0){
            temp=temp/10;
            c++;
        }
        temp=num;
        while(temp!=0){
            rem=temp%10;
            res=res*10+rem;
            temp=temp/10;
        }
        cout<<"\nreverse   =   "<<res;
     }


   };

   class B: virtual public A{
    protected:
    int n;
    public:
    B(int a,int b):A(b){
        n=a;
    }
    public:
    void primenum(){
        int flag=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                flag=1;
            }
        }

        if(flag){
            cout<<"\nnot prime number\n";
        }else{
            cout<<"\nprime number\n";
        }
    }

   };

   class c: virtual public B{
     // find strong or not

     private:
     int number;
     public:
      c(int x,int y,int c):B(x,c){
        number=y;
     }
     public:
     void factorial(){
        int sum=1,rem,res=0,temp=number;
        while(temp!=0){
            rem=temp%10;
            temp=temp/10;
            for(int i=1;i<=rem;i++){
                sum=sum*i;
            }
            res=res+sum;
            sum=1;
        }

        if(res==number){
            cout<<"\n\nstrong number\n";

        }else{
            cout<<"\n\nnot strong number\n";
        }

     }

   };

   int main(){

    c obj(11,153,12);
    obj.reverse();
    obj.factorial();
    obj.primenum();


    return 0;
   }