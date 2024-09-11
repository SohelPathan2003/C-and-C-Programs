#include<iostream>
using namespace std;

// WAP to perform sorting of array
// void sort(int arr[]): 
// void sort(char[])

int *sort(int *arr,int size){
    // here we sort the array in ascending order
    int temp;
    cout<<"After sorting in ascending order\n\n";
    for(int i=0;i<size;i++){
      for(int j=i+1;j<size;j++){
        if(arr[i]>arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
      }
     

    }
    return arr;

}



// sort the character using their ascii number
void sort(char ch[],int size){
    char temp;
    cout<<"\n"<<"After sorting array into ascending order\n\n";
    for(int i=0;i<size;i++){
        for(int j=1+i;j<size;j++){
            if(ch[i]>ch[j]){
                temp=ch[i];
                ch[i]=ch[j];
                ch[j]=temp;
            }
        }
        cout<<ch[i]<<"\t";
    }

}
int main(){
    int size,arr[50],*ret;
    char ch[50];
    cout<<"Enter a size of array\n\n";
    cin>>size;
    cout<<"Enter elements in array\n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    
    cout<<"Enter character's in array\n\n";
    for(int i=0;i<size;i++){
        cin>>ch[i];
    }
    ret=sort(arr,size);
    for(int i=0;i<size;i++){
         cout<<ret[i]<<"\t";
    }
    sort(ch,size);
    return 0;
}
