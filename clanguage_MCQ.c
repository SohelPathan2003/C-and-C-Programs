#include<stdio.h>
 #include<string.h>
int main(){
//     char ch[5][90];
//    printf("Enter the strings\n");
//    for (int i=0; i<5; i++)
//    {    gets(ch[i]);
//    }
//    printf ("display the all string lines\n");
//    for (int i=0; i<5; i++)
//    {   puts (ch[i]);
//    }


//   char ch[]={"good"};
//     char *ptr;
//     ptr=ch;
//      printf("%s",ptr);
// 	 return 0;


    // char ch[]={"good"};
    // char *ptr;
    // ptr=ch;
    // ptr=ptr+3;
    //  printf("%s",ptr);



//     char ch[]={"good"};
//    void show(char *);
//    show(ch);
//    printf("%s",ch);
// 	 return 0;
// }
// void show(char *ptr){
// 	*ptr='m';      //mood



//   char s[] = "Rendezvous!"; 
//    printf ("%d", *( s + strlen (s))) ;  /


//    char ch[20]; 
//    int i; 
//   for(i = 0;i<19;i++ ) 
//      *(ch + i) = 'a'; 
//     ch[i]='q';
//      printf ("%s", ch) ;


// char str[20]; 
// int i; 
// for(i = 0;i<=18;i++ ) 
//       i[str] = 'C' ; 
//       i[str] = '\0'; 
//      printf ("%s", str); 



// char str[20]; 
//     static int i; 
//     for (;;)
//     {  i++[str] = 'A' + 2;  
//         if(i==19) 
//            break; 
//     }
//      i[str] = '\0'; 
//      printf ("%s", str);



// static char str[ ] = {48,48,48,48,48,48,48,48,48,48}; 
//     char*s; 
//      int i; 
//      s = str; 
//     for (i = 0 ; i <= 9 ; i++) 
//     {     if(*s) 
//              printf ("%c ",*s) ; // %c that why ascii value will be print 48===0
//           s++; 
//      }



// static char str[10] = {0,0,0,0,0,0,0,0,0,0}; 
//     char *s; 
//       int i; 
//      s = str; 
//     for (i = 0 ; i <= 9 ; i++)  { 
//         if(*s )                  // here he check the value of s[i] means 0 it will goes to else statement
//           printf ("%c",*s); 
//       s++; 
//     }




// static char s[ ] = "C smart!!"; 
//    int i; 
//     for (i = 0 ; s[i]; i++) 
//          printf ("%c %c %c %c\n", s[i], *( s + i) , i[s], *( i + s)) ; 



//    static char s[ ] = "Oinks Grunts and Guffaws"; 
//       printf ("%c\n",*(&s[2])); 
//       printf ("%s\n",s +5) ; 
//       printf ("%s\n",s);
//       printf ("%c\n",*(s +2)) ; 
//       printf ("%d\n",s);


// n       grunts and guffaws         Oinks grunts and guffaws n       address


// static char s[251] = "The cocaine man"; 
//     int i = 0 ; 
//     char ch; 
//     ch = s[++i]; 
//     printf ("%c%d\n", ch,i); 
//     ch = s[i++]; 
//     printf ("%c %d\n", ch,i); 
//     ch = i++[s]; 
//     printf ("%c%d\n", ch, i) ; 
//     ch = ++i[s] ; 
//      printf ("%c%d\n", ch,i);

     // h      1       h     2        e       3      o    4    



//     static char arr[ ] = "Pickpocketing my peace of mind..";
//    int i; 
//    printf ("%c\n",*arr); 
//    arr=arr+i;
//    printf ("%c\n",*arr);



//    static char str[ ] = "Limericks"; 
//      char*s; 
//      s = &str[7] - 6 ;     // imericks me str[1]........ indexing start from 1...
//      while (*s) 
//       printf ("%c", *s++); 


     
    //    static char s[ ] = "C it for  yourself"; 
    //  int i = 0 ; 
    //  while (s[i])
    //   { 
    //        if(s[i]!=' ') 
    //        s[i] = s[i] + i ; 
    //         i++; 
    //  } 
    //  printf ("%s",s); 

       // c k  w  k u y  



    //     static char str[ ] = "For your eyes only"; //17
    //   int i; 
    //   char *p; 
    //   for (p = str, i = 0 ;  i<=strlen(str); p++, i++) 
       //printf ("%c", *( p + `i)) ; 

       // F r  y  u "  "   y s o l


    //       static char str[ ] = "MalayalaM"; 
    // char *s; 
    //  s = str + 8 ;   // here last element is copying 
    //  while (s >= str) 
    //  {   printf ("%c",*s);    // here we print the reverse of string 
    //      s--; 
    //  }


//   static char a[ ] = "Able was I ere I saw elbA"; 

//     char *t, *s, *b; 
//     s = a ; 
//     b = a + strlen (a ) -1 ; 
//     t = b; 
//     while (s != t) 
//     {  printf ("%c",*s); 
//          s++; 
//          printf ("%c",*t); 
//            t--;
//     }

    // AAbblle  wwaass II  ee






    // char a[]="sohel";
    // printf("%d",sizeof(a));// here function count the null character also . output  6

    //  char a[]="sohel";
    // printf("%d",strlen(a)); // here function only count the character of string.output   5






}