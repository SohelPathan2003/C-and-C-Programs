#include<iostream>
#include<string.h>

using namespace std;

class Food{
    private:
    int fid;
    char fname[100];
    int fprice;
    char fcategory[100];
    public:
    void setvalues(int fid,char fname[],int fprice,char fcategory[]){

        this->fid=fid;
        strcpy(this->fname,fname);
        this->fprice=fprice;
        strcpy(this->fcategory,fcategory);
    }

    void showdata(){
        cout<<fid<<"\t"<<fname<<"\t"<<fprice<<"\t"<<fcategory<<"\n";
    }
    int getprice(){
        return fprice;
    }
    int getid(){
        return fid;
    }
    char* getname(){
        return fname;
    }
    char* getcategory(){
        return fcategory;
    }
};

int main(){
    Food obj[5];
    int choice;

     int id,price;
        char name[100],category[100];
        for(int i=0;i<3;i++){

             cout<<"Enter Details id name price category\n";
             cin>>id>>name>>price>>category;
             obj[i].setvalues(id,name,price,category);

        }


    cout<<"1. for Display all food details\n";

    cout<<"2. for Display food details where range is 100 to 500\n";

    cout<<"3. for search food details using by\n";

    cout<<"4. for update food details using by\n";

    cout<<"5. for Delete food details using by\n";

    cout<<"6.existing the code\n\n";



    
    
    cout<<"Enter your choice\n";
    cin>>choice;
    cout<<"\n";

    switch(choice){
        case 1:
        // for Display all food details
         cout<<"id\tname\tprice\tcategory\n";
        for(int i=0;i<5;i++){
            obj[i].showdata();
        }
        break;

        case 2:
       // Display food details where range is 100 to 500
        cout<<"id\tname\tprice\tcategory\n";
        for(int i=0;i<5;i++){
           int price= obj[i].getprice();
           if(price>=100 && price<=500){
            obj[i].showdata();
           }
        }

        break;

        case 3:
        //for search food details using by
        int a;
        cout<<"\t1. for food id\n";
        cout<<"\t2. for food name\n";
        cout<<"\t3. for food price\n";
        cout<<"\t4. for food category\n\n";
        cout<<"\t Enter your choice by which you want to search\n";
        cin>>a;
        switch(a){
            case 1:
            cout<<"\nEnter id of that food\n";
            int fid,retid;
            cin>>fid;
           
            cout<<"id\tname\tprice\tcategory\n";
            for(int i=0;i<3;i++){
                 retid=obj[i].getid();
                if(retid==fid){
                    obj[i].showdata();
                }
            }
            break;
            case 2:
            // search by food name
            cout<<"\n Enter food name which you want to search\n";
            char fname[100],*fn;
            cin>>fname;
             cout<<"id\tname\tprice\tcategory\n";
             for(int i=0;i<3;i++){
                fn=obj[i].getname();
                if(fn==fname){
                    obj[i].showdata();
                }
             }

            break;
            case 3:
            break;
            case 4:
            break;
        }

        break;
        case 4:
        //  for update food details using by
         int c;
        cout<<"\t1. for food id\n";
        cout<<"\t2. for food name\n";
        cout<<"\t3. for food price\n";
        cout<<"\t4. for food category\n\n";
        cout<<"\t Enter your choice by which you want to update\n";
        cin>>c;
        switch(c){
            case 1:
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
        }


        break;
        case 5:
            //  for Delete food details using by
         int b;
        cout<<"\t1. for food id\n";
        cout<<"\t2. for food name\n";
        cout<<"\t3. for food price\n";
        cout<<"\t4. for food category\n\n";
        cout<<"\t Enter your choice by which you want to delete\n";
        cin>>b;
        switch(b){
            case 1:
            break;
            case 2:
            break;
            case 3:
            break;
            case 4:
            break;
        }

        break;
        default:
        cout<<"\ninvalid choice\n";
        break;
      



    }




    return 0;
}