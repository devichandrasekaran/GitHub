string in c
i/p
a
o/p
a
char f='a';
sequence of character terminated with null character'\0'
syntax:
char string_name[size];

initalization&assigning
char string_name[size]="helloworl";
char string_name[]="hello worl";
char string_name[10]={'h','e','l','l','o'};
char string_name[]={'h','e','l','l','o'};

library function in string 
1.strlen(string_name)=>to find length of string
return type=>integer
2.strcpy(s1,s2)=>copy the content of string s2 to s1.
3.strcmp(s1,s2)=>compare firststring with second string 
                 s1=s2=>0 s1=!s2=>1
4.
s1="hello"
s2="hello"
o/p
true

char s1[10];
char s2[10];
scanf("%s",s1);
scanf("%s",s2);

#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    //printf("Try programiz.pro\t");
 char f[20];
 char w[20];
 char q[20]="gfgv";
 for(int i=0;i<10;i++){
 
 scanf("%c",&f[i]);
 }
  for(int j=0;j<10;j++){
 printf("%c",f[j]);}
 printf("%d",strlen(f));
 strcpy(w,f);
 printf("%s",w);
 printf("%d",strcmp(w,q));
    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    //printf("Try programiz.pro\t");
 char f[20];
 char w[20];
 char q[20]="gfgv";
 for(int i=0;i<10;i++){
 
 scanf("%c",&f[i]);
 }
 for(int i=0;i<10;i++){
     scanf("%c",&w[i]);
 }
 int i=0,flag=1;
 while(f[i]!='\0' &&w[i]!='\0' ){
     if(f[i]==w[i])
     {
         flag=1;
    
     }
     else{
         flag=0;
         break;
     }
     i++;
 }
 if(flag==1)
 printf("true");
 else
 printf("false");
}



5.strcat(s1,s2)=>concat s1 with s2
                result will be stored in s1
6.strlwr()=>lowercase
7.strupr()=>
8.strstr(s1,s2)first occurence of s2 in s1













