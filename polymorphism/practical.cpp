 /*Wap to create class name as Student this class having (ld,name, feer.per)
 this class have function setData(id,name, fees,per) create 5 object of this class
  (Array Of Object[]) Store in Array Of Object[]
  ----------------------------------------------------------------------------------------
  case 1. Add Five Student Object];
  case 2. Display All Objects[]
  case 3. Search Object using Id;
  case 4. Remove Object using id;
  case 5. Sort Object Acceding and Descending Order using Per
  case 6. Find Topper in Objects

  note: using switch case

 */
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;

class Student{
    private:
    int id,fees;
    float per;
    char name[100];
    
    public:
    void setData(int id,char name[],int fees,float per){
        this->id=id;
        strcpy(this->name,name);
        this->fees=fees;
        this->per=per;
    }

    public:
    void showData(){
        cout<<id<<"\t"<<name<<"\t"<<fees<<"\t"<<per<<"\n\n";
    }
    int getid(){
        return id;
    }
    float getper(){
        return per;
    }


};

int main(){
    Student obj[5],temp;

     int id,fees,choice;
    float per;
    char name[100];

    cout<<"Enter student data \n";
    for(int i=0;i<5;i++){
        cin>>id>>name>>fees>>per;
        obj[i].setData(id,name,fees,per);

    }

    cout<<"\n1.Display All Objects[]\n";
    cout<<"2.Search Object using Id\n";
    cout<<"3.Remove Object using id\n";
    cout<<"4.Sort Object Acceding and Descending Order using Per\n";
    cout<<"5.Find Topper in Objects\n";
    cout<<"\n\n Enter your choice\n";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"\nid\tname\tfees\tpercentage\n\n";
             for(int i=0;i<5;i++){
            obj[i].showData();
             }
          break;
        case 2:
                 // search id and prints its object details
        int j,id;
        cout<<"\nEnter id which you want's to search\n";
        cin>>j;
        cout<<"\nid\tname\tfees\tpercentage\n\n";
        for(int i=0;i<5;i++){
            id=obj[i].getid();
           if(id==j){
            obj[i].showData();
            break;
           }
        }
        break;
        case 3:
        //Remove Object using id
        int d;
        cout<<"\nEnter a id whose object do you want's to delete\n";
        cin>>d;
        for(int i=0;i<5;i++){
            int matched=obj[i].getid();
            if(matched==d){
                for(int k=i;k<5;k++){
                    obj[k]=obj[k+1];
                }
                break;
            }
        }
        cout<<"\nAfter delete object\n\n";
        cout<<"\nid\tname\tfees\tpercentage\n\n";
        for(int i=0;i<4;i++){
            obj[i].showData();
        }

        break;


        case 4:

        //Sort Object descending order using Per
       float first,next;
        for(int i=0;i<5;i++){
            for(int j=i+1;j<5;j++){
                first=obj[i].getper();
                next=obj[j].getper();

               if(first<next){
                temp=obj[i];
                obj[i]=obj[j];
                obj[j]=temp;
               } 

            }
        }

        cout<<"\nAfter sorting object into descending order\n";
        cout<<"\nid\tname\tfees\tpercentage\n\n";
        for(int i=0;i<5;i++){
            obj[i].showData();
        }

        break;


        case 5:
        // Find topper in objects
        float topper,next1;
        topper=obj[0].getper();

        for(int i=0;i<5;i++){
            for(int j=i+1;j<5;j++){
                next1=obj[j].getper();
                if(topper<next1){
                    topper=next1;
                }
            }
        }
        cout<<"\nid\tname\tfees\tpercentage\n\n";
        for(int i=0;i<5;i++){
            next1=obj[i].getper();
            if(topper==next1){
                obj[i].showData();
                break;
            }
        }

        break;
   

 }
}