#include<iostream>

using namespace std;
class byvalue_byref{
    private:
    int a;int b;
    public:
    void setval(int *c,int *d){      // here we make changes and it will be reflected on actual
                                 //  value because we were pass the reference of that variable.
                                   
       int temp;
       temp=*c;
       *c=*d;
       *d=temp;
    }
};
int main(){
    int x,y;
    cout<<"enter two number's\n";
    cin>>x>>y;
    byvalue_byref obj;

    obj.setval(&x,&y);  // here we call the function and pass the address of variable 
                        // or we say we are passing the reference of variable and that or if we 
                        // make changes on that variable into the function definition that will be
                        //reflected on actual value or real variable. or other case we will discus
                       // below code........ 
                            

    cout<<"\nx = "<<x<<"\t y = "<<y;
}
                //  .
                //  .
                //  .
                //  .
                //  .

           // in other hand 

// class byvalue_byref{
//     private:
//     int a;int b;
//     public:
//     void setval(int c,int d){ 

//        int temp;
//        temp=c;
//        c=d;
//        d=temp;
//        cout<<"\n c = "<<c<<"\t d = "<<d;
//     }
// };
// int main(){
//     int x,y;
//     cout<<"enter two number's\n";
//     cin>>x>>y;
//     byvalue_byref obj;

//     obj.setval(x,y);    // in this situation we were pass the copy of that variable into the 
//                        // function definition if we will make changes on function definition 
//                       // block that will not reflected on actual value or variable because we
//                     //   made changes on local variable and the most important this was we were 
//                    //   pass the copy of that variable that why not be reflected..... 

//   cout<<"\nx = "<<x<<"\t y = "<<y;
// }
  