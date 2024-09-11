/*

       what is encapsulation??
       encapsulation means to hide the implementation  details from end use or at logical level 
       is know as encapsulation.
       means here we make our instance variable or method as a private no one directly access
       out member.

       we allow to user use our member after if you get satisfied our requirement then your
       allowed to  use..

       how can we achieve the good encapsulation?
       if we wants to achieve good encapsulation in cpp then we have to make instance variable as
       private and give them access by method and within a method we can write logic for those who
       wants to use it....


       suppose example:-

            who can apply for voting card we cannot give them directly access to make card
            first we have to check their age and identity then we want to give them permission..


*/

#include<iostream>
#include<string.h>

using namespace std;

// who can apply for voting card we cannot give them directly access to make card
// first we have to check their age and identity then we want to give them permission.

class voter_card{
    private:
    long int voter_id;
    

    public:

    voter_card(int age,char country[]){
         voter_id=12122334;
       int c=strcmp("india",country); // if compared it will return 0 and if false it will return 1;
      

        if(age>18 && ~(c)){
            cout<<"voter id is   "<<voter_id;  

        }else{
            cout<<"\nsorry your not valid now \n\n";
        }
    }


};

int main(){
    int age;
    char country[20];
    cout<<"Enter you age\n";
    cin>>age;
    cout<<"\nEnter you country \n\n";
    cin>>country;
    voter_card obj(age,country);
}



