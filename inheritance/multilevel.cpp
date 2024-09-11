/*
Q. what is multilevel in cpp?

-> multilevel means there are only one main parent and one main child every class inherits  everyone;

      syntax:
               parent( Main parent ) 
                 |
               child1
                 |
               child2
                 |
               child3
                 |
               child (main child)


Q.write a program by using multilevel.
       1) create a class name as accept with member method name as void setArray(int arr[]);
       2) create second class name FindMax with one instance variable and 
          member function name as FindMax with member function void FindMaxValue();
      3)  create third class name as delete_element with member function void DeleteMaxValue();
      4)  create fourth class name as find_Factorial  void findFacto();


      note: solved this problem by using multilevel inheritance


*/


#include<iostream>

using namespace std;
    
    class Accept{
 protected:
      int *a;
      int len;


      public:
      void setArray(int arr[],int length){
        a=arr;
        len=length;
      }
      void showdata(){
        cout<<"\n"<<a[0]<<"\t"<<len;
      }


    };

   class FindMax:public Accept{
        protected:
        int max;
        public:
        
        void FindMaxValue(){
          max=a[0];
          for(int i=0;i<len;i++){
            if(a[i]>max){
              max=a[i];
            }
          }
          cout<<"\nmax is\t"<<max<<"\n\n";
        }
        
   };

   class delete_element:public FindMax{
    public:
        void deletemax(){ 
         for(int i=0;i<len;i++){
          if(max==a[i]){
            for(int j=i;j<len;j++){
              a[j]=a[j+1];
            }
          }
         }

         cout<<"\n After deleted max element from array\n";
         for(int k=0;k<len-1;k++){
          cout<<a[k]<<"\t";
        }
        }

   };

   class find_Factorial:public delete_element{
       protected:
       int ar[50];
       int fact;
       public:
       void calfact(){ 
        ar[len];
       fact=1;
       for(int i=0;i<len-1;i++){
         for(int j=1;j<=a[i];j++){
          fact=fact*j;

         }
         ar[i]=fact;
         fact=1;
       }

       cout<<"\nfactorial of array elements \n\n";
       for(int i=0;i<len-1;i++){
        cout<<ar[i]<<"\t";
       }
       }
   };


   int main(){
   Accept obj;
    int size;
    cout<<"\nenter a size of array\n";
    cin>>size;

    int array[size];

    cout<<"\nEnter elements in array\n";
    for(int i=0;i<size;i++){
      cin>>array[i];
    }

    
    // obj.setArray(array,size);
    // obj.showdata();

    

    // FindMax obj1;
    // obj1.setArray(array,size);
    // obj1.FindMaxValue();



    // delete_element obj3;
    // obj3.setArray(array,size);
    // obj3.FindMaxValue();
    // obj3.deletemax();


    find_Factorial obj4;
    obj4.setArray(array,size);
    obj4.FindMaxValue();
    obj4.deletemax();
    obj4.calfact();



   }