// write a cpp program count digits and return .

#include<iostream>
using namespace std;
int digit(int num){
    int dig=0;
    while(num!=0){
        num=num/10;
        dig++;
    }
    return dig;
}
int main(){
    int a;
    cout<<"Enter a number\n";
    cin>>a;
    int dig=digit(a);
    cout<<"total number of digits are"<<dig<<"\n";


}
