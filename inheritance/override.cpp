#include<iostream>

using namespace std;

class parent{
    public:
   virtual void operation(int a[],int size)=0;
};

class sort:public parent{
    void operation(int a[],int size){
     int temp;
     cout<<"\nAfter sorting array in descending order\n";
        for(int i=0;i<size;i++){
            for(int j=i+1;j<size;j++){
                if(a[i]<a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
            cout<<a[i]<<" ";

        }

    }
};

class FindMssing:public parent{

    void operation(int a[],int size){
        for(int i=0;i<size-1;i++){
            for(int j=a[i]+1;j<a[i+1];j++){
                cout<<j<<" ";
                
            }
        }

    }

};

class strongNo:public parent{

    void operation(int a[],int size){
        int res,temp,rem,sum=0;
        for(int i=0;i<size;i++){
            res=1;
            temp=a[i];
            sum=0;
            while(temp!=0){
                rem=temp%10;
                temp=temp/10;
            
            for(int j=1;j<=rem;j++){
                res=res*j;
            }
            sum=res+sum;
            res=1;
        }
            if(sum==a[i]){
                cout<<a[i]<<"  is strong number\n";
            }
        }
    }
};

int main(){
    parent *ref;
      int a[]{10,12,34,43,65,145,150};
      
        int choice;
       int size=sizeof(a)/sizeof(a[0]);
    do{ 
      cout<<"\n1 for sort\n";
      cout<<"2 for Find missing elements\n";
      cout<<"3 for check Strong or not\n";
      cout<<"Enter your choice\n";
      
      cin>>choice;
      switch(choice){
          case 1:
          ref=new sort();
          ref->operation(a,size);
          break;

          case 2:
          ref=new FindMssing();
          ref->operation(a,size);
          break;
          
          case 3:
           ref=new strongNo();
           ref->operation(a,size);
           break;

      }
    }while(choice<4);
    return 0;
}