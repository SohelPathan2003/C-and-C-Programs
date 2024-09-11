#include<stdio.h>

static  void abc()  //  stack 
  {
    static int x=10;
     printf("%d\t", x);
     x++;
  }

int main()
{
   abc();
    abc();
     abc();
}