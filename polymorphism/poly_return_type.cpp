#include<iostream>
using namespace std;
class rt_type{
    private:
    int a,b;
   
    public:
    int set(int c,int d){
        cout<<a+b;
       return 0;
    }

     public:
    int set(){
        this->a=a;
        this->b=b;

        return 0;
    }
};

int main(){
    cout<<"enter a two numbers\n";
    int a,b;
    cin>>a>>b;
    rt_type obj;
    int a=obj.set(a,b);       /*              conclusion is that:
    
                                  means we have to give same name but different parameter 
                                  if you gave different parameter then point was closed to discuss
                                  we have to gave different return type or not because if you were 
                                  give different parameter then compiler automatically consider 
                                  it is different function that why there are no impact of different 
                                  return type or same return type.

                            */
                       
    //set(a,b);

}