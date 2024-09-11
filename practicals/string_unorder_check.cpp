#include<iostream>
#include<string.h>
using namespace std;

class strmatch{
    private:
    char str1[20],str2[20];
    public:
    void setvalue(char a[],char b[]){
        strcpy(str1,a);
        strcpy(str2,b);

    }

    public:
    void performOperation(){
        int sum,sum2;
        sum=sum2=0;
        for(int i=0;str1[i]!='\0';i++){
             if(str1[i]>=65 && str1[i]<=92){
                str1[i]=str1[i]+32;
            }
            sum=sum+str1[i];
        }
        for(int i=0;str2[i]!='\0';i++){
            if(str2[i]>=65 && str2[i]<=92){
                str2[i]=str2[i]+32;
            }
            sum2=sum2+str2[i];
        }

        if(sum2==sum){
            cout<<"both are same\n";
        }
        else{
            cout<<"both are not same\n";
        }
    }

};

int main(){

    char a[29],b[20];
    cout<<"enter two strings\n";
    cin>>a>>b;
    strmatch obj;
    obj.setvalue(a,b);
    obj.performOperation();
    return 0;
}