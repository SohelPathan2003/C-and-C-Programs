#include<iostream>

using namespace std;
  
  class Element{

    protected:
    int *a;

    public:
    void setarray(int arr[]){
        a=arr;
    }
    public:

    virtual void perform()=0;

  };

  class secondLargest:public Element{
    public:
      void perform(){
        int temp;
        // first we have to sort the given array..

        for(int i=0;i<5;i++){
            for(int j=i+1;j<5;j++){
                if(a[i]<a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        //we have successfully sorted the given array...
        for(int i=0;i<5;i++){
            if(a[i]!=a[i+1]){
                
                cout<<"second largest element is  "<<a[i+1];
                break;
            }
        }

      }


  };

  class third:public Element{
    public:
    void perform(){
        // first we have to sort the given array

        int temp;
        for(int i=0;i<5;i++){
            for(int j=i+1;j<5;j++){
                if(a[i]<a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        int c=1;

        for(int i=0;i<5;i++){
            if(a[i]!=a[i+1]){
                c++;
                if(c==3){
                    cout<<"\nthird largest element is   "<<a[i+1];

                }
                

            }
        }

    }
  };

  int main(){
    third obj;
    int arr[5];
    cout<<"\n Enter elements in array\n";
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    obj.setarray(arr);
    obj.perform();
  }
