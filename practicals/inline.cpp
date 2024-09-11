#include<iostream>
using namespace std;

class myclass{
    public:
       void show();
};

void myclass::show(){
    cout<<"here we write function definition outside of class\n";
}

int main(){
    myclass *obj;
    obj->show();

    return 0;
}