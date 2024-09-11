

      // there are two ways two copy one string to another string.....

//          1 way to copy string using strcpy predefine function

#include<iostream>
#include<string.h>
using namespace std;


// class A{
//     private:
//     char name[100];
//     public:
//     void setname(char name[]){
//         strcpy(this->name,name);
//     }
//     void showname(){
//         cout<<"name is "<<name;
//     }
// };

// int main(){

//     A obj;
//     char ch[]={"sohel"};
//     obj.setname(ch);
//     obj.showname();



// }


//          ***** second way to copy string******

class A{
    private:
    char *name;
    public:

    void setname(char *name){
        this->name=name;
    }
    void showname(){
        cout<<"name is "<<name;
    }
};

int main(){
    A obj;
    char ch[100]={"sohel"};
    obj.setname(ch);
    obj.showname();
}