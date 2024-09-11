/*Q1. WAP to create class name as Power with two functions void setValue(int x,int y) and int 
getPower() void setValue(int base,int index): accept two values as parameter first as 
base and second index int getPower(): this function can calculate power two number and return it 
we have to create one more class name as PowerApplication which contain main method.*/



#include<iostream>

using namespace std;
class power{
    private:
    int a,b;
    int  pow;
    public:
    void setvalue(int x,int y);
    int getpower();
};

void power::setvalue(int x,int y){
    a=x;
    b=y;

}
int power::getpower(){
    pow=1;
    for(int i=1;i<=b;i++){
        pow=pow*a;
    }
    return pow;
}
int main()
{
    power obj;
    cout<<"Enter base and index for calculate the power \n";
    int base,ind;
    cin>>base>>ind;

    obj.setvalue(base,ind);
   int ans= obj.getpower();

    cout<<"\npower is "<<ans;



    //int *ptr;
    // ptr=((power *)malloc(sizeof(power)*power));
}