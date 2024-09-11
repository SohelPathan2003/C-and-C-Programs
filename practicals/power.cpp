#include<iostream>

    using namespace std;

   class power{
    private:
    int pow;




    public:
    power(int base,int index){
        pow=1;
        for(int i=1;i<=index;i++){

            pow=base*pow;
        }

    }
    int getpow(){
        return pow;

    }

   };

   int main(){
    int base,index;
    cout<<"enter base and index value\n";
    cin>>base>>index;
    power obj(base,index);
    int power=obj.getpow();
    cout<<" power is "<<power;



    return 0;
   }