#include<iostream>
using namespace std;

class Arrayparent{
    public:
    int *arr;
    public:

    void setArray(int a[]){
      arr=a;
    }
};

class reverse:public Arrayparent{
    public:
    void reverse1(){
        cout<<"before reversing array\n\n";
      for(int i=0;i<8;i++){
        cout<<arr[i]<<"\t";
      }
      cout<<"\n";
        int temp;
        for(int i=0,j=7;i<j/2;i++,j--){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      cout<<"After reversing array\n\n";
      for(int i=0;i<8;i++){
        cout<<arr[i]<<"\t";
      }
      cout<<"\n";
     }
};

class findmax:public Arrayparent{
    public:
        int max;
        public:
    void findmaxi(){
      max=arr[0];
        for(int i=0;i<8;i++){
            
                if(arr[i]>max){
                    max=arr[i];
            }
        }
        
        cout<<"max is "<<max<<"\n\n";
    }

};

class sort:public Arrayparent{
  private:
  int temp;

  public:
  void sort1(){
    cout<<"\nAfter sorting array\n\n";
    for(int i=0;i<8;i++){
      for(int j=i+0;j<8;j++){
        if(arr[i]>arr[j]){
          temp=arr[j];
          arr[j]=arr[i];
          arr[i]=temp;


        }
      }
      cout<<arr[i]<<"\t";
    }

  
  }

};

int main(){
    reverse o;
    findmax obj2;
    sort obj3;
    
    int arr[]={12,23,43,2,5,48,7,5}; //8
    o.setArray(arr);
    o.reverse1();

    obj2.setArray(arr);
    obj2.findmaxi();

    obj3.setArray(arr);
    obj3.sort1();




return 0;
}
