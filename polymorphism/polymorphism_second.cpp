// WAP to Calculate Area
// int area(int,int): return area of rectangle
// float area(float radius): float area of circle


#include<iostream>
// WAP to Calculate Area
using namespace std;

int area(int length,int width){
    int area;
    area=length*width;

    return (area);
}
float area(float radius){
    float pi=3.14;
    float area;
    area=pi*radius*radius;

    return (area) ;
}
int main(){
    cout<<"1 for area of ractangle \n";
    cout<<"2 for area circle \n";
    int choice;
    cout<<"Enter your choice\n";
    cin>>choice;
    switch(choice){
    case 1:
        float length,width;
        cout<<"Enter length and width\n";
        cin>>length>>width;
        int ans1;
        ans1=area(length,width);
        cout<<"\n"<<"Area of ractangle is \n"<<ans1;
        break;
    case 2:
    float radius;
 
    cout<<"\nEnter a radius of  circle\n";
    cin>>radius;
    float ans;
    ans1=area(radius);
    cout<<"\nArea of circle is \n"<<ans;
    break;

        


    }

    return 0;


}