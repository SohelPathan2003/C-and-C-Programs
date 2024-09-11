#include<iostream>

  using namespace std;
   
   class Majority{
    private:
    int majority,c,temp;


    public:
    Majority(int a[],int size){
      c=1;
       // to find majority we have to sort the given array it would be ascending or descending..
       for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
       }
       majority=0;
        for(int i=0;i<size;i++){
        if(a[i]==a[i+1]){
            c++;
              if(c>size/2){
                majority=a[i];
                break;
            }
        }else{
            c=1;
          
        }
       }



    }


    public:
    int getmajority(){
        return majority;
        
    }

   };



   int main(){
    int size;
    cout<<"Enter size of array\n";
    cin>>size;
    int a[size];

    cout<<"Enter array elements\n";
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    Majority obj(a,size);

   int ans= obj.getmajority();
   if(ans)
    cout<<"\nmajority element is\t"<<ans;
    else
    cout<<"\nthere are no majority element in array\n";
    
   }