#include<iostream>
#include<string.h>
using namespace std;

/*
 find length of string create strlen class and declare two methods within a class,name as void 
 setstr(char str[]); and int getlen();
 note: you to define those function out side of the class

*/
class strlen1{
    private:
    char ch[100];
    int c;
    public:
   void setvalue(char str[]);
   int getstr();
};
 void strlen1 :: setvalue(char str[]){
        strcpy(ch,str);
    }

    int strlen1 ::getstr(){
        c=0;
        for(int i=0;ch[i]!='\0';i++){
            c++;
        }
        return c;
        
    }



int main(){
    strlen1 obj;
    char ch[100];
    cout<<"\nEnter a string\n";
    gets(ch);
    obj.setvalue(ch);
    int len=obj.getstr();
    cout<<"\n Length of string is \t"<<len;
}