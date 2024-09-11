//write a program to pass the array function name as findEvenOdd,then display the even and odd number in array
#include<iostream>
using namespace std;
void findEvenOdd(int *arr,int size){
    int even[50],odd[50],e=0,o=0,flag=0,flag2=0;
    for(int i=0;i<size;i++){
        if(arr[i]%2==0)
        {
            even[e]=arr[i];
            e++;
            flag=1;

        }else{
            odd[o]=arr[i];
            o++;
            flag2=1;
        }

    }
    
    if(flag){

    
    cout<<"total even number's in array are  ";
    for(int i=0;i<e;i++){
        cout<<even[i]<<"\t";
    }

    }else{
        cout<<"there are no even number's paresent";
    }





    cout<<"\n\n";
    if(flag2){

    
    cout<<"total odd number's in array are  ";
    for(int i=0;i<o;i++){
        cout<<odd[i]<<"\t";
    }
    }else{
        cout<<"there are no odd number's paresent";
    }

}
int main(){
    int arr[50],size;
    cout<<"Enter how many elements do you want to add in array\n";
    cin>>size;
    cout<<"enter elements in array\n\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    findEvenOdd(arr,size);
}