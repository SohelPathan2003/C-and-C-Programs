// WAP to create class name as Player with two functions 
// void setPlayer(int id,char name[],int run): this function accept id,name and run of player as parameter
// void show(): this function display the player data 

// Note: your task is you have to create array of Player class with size 5 and arrange all player record in ascending order by run 

#include<iostream>
#include<string.h>
using namespace std;

class player{
    char player;
    int id;
    char name[200];
    int run;

    public:
    void setplayer(int i,char n[],int r){
        id=i;
      strcpy(name,n);
        run=r;
       
    }

    void show(){
        cout<<"\n\n"<<id<<"\t"<<name<<"\t"<<run<<"\n\n";
    } 

    int getrun(){
        return run;
    }

};
int main(){
    player obj[3];
    int id,run;
    char name[100];

    for(int i=0;i<3;i++){
        cout<<"enter id name and runs\n";
       cin>>id>>name>>run;

        obj[i].setplayer(id,name,run);

    }

    // we have to check less runs and set it as a ascending order...
    cout<<"\n\n\n After ascending the runs and their id and name\n\n";

    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if((obj[i].getrun())>(obj[j].getrun())){
               player temp=obj[i];
               obj[i]=obj[j];
               obj[j]=temp;
                
            }
        }
    }

    cout<<"\n\nAfter update the player by their runs\n\n";
    for(int i=0;i<3;i++){
        obj[i].show();
    }
    
}