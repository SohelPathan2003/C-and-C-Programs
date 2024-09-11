// WAP to performArray Operation
// void reverse(int a[]): reverse integer array
// void reverse(char[]): reverse character array

#include<iostream>
using namespace std;
//wap to perform array operation


int *reverse(int *arr,int size){
    int temp;
    for(int i=0,j=size-1;i<size/2;i++,j--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return arr;
}

char *reverse(char *ch,int size){
        char temp;
        for(int i=0,j=size-1;i<size/2;i++,j--){
            temp=ch[i];
            ch[i]=ch[j];
            ch[j]=temp;
        }


    return ch;
}
int main(){
     cout<<"1 for reverse integer array\n\n";
     cout<<"2 for reverse character array\n\n";
    
    int choice;
    cout<<"Enter   your choice\n";
    cin>>choice;


    switch(choice){
        case 1:
        cout<<"Enter arrays size\n";
        int size;
        cin>>size;
        cout<<"Enter elements in array\n\n";
        int arr[50];
        for(int i=0;i<size;i++){
            cin>>arr[i];
        }

        int *ans;
        ans=reverse(arr,size);
        cout<<"\n"<<"After reverse the array\n";
        for(int i=0;i<size;i++){
            cout<<ans[i]<<"\t";
        }

        break;
        case 2:
        char ch[50];
        cout<<"Enter a size of array\n\n";
        cin>>size;
        cout<<"Enter character in array\n";
        
        for(int i=0;i<size;i++){
            cin>>ch[i];
        }
        char *ans1;
        ans1=reverse(ch,size);
        cout<<"After reverse the character array\n";
        for(int i=0;i<size;i++){
            cout<<ans1[i]<<"\t";
        }

        break;
        default:
        cout<<"invalid choice please select between 1 and 2";
    }





    return 0;
}