#include<iostream>
using namespace std;
int prime(int num){
    int flag=1;
   
    for(int i=2;i<num;i++){
        if(num==2){
            break;
        }
      if(num%2==0){
        flag=0;
      }
    }
    return flag;
}
int main(){
    int a;
    cout<<"Enter a number\n";
    cin>>a;
    int ans=prime(a);
    if(ans)
    cout<<"prime number\n";
    else
    cout<<" not prime number";
}