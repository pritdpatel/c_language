/*
    name : prit patel
    file name: lesson4_array.c
    date: October 2, 2023
*/
#include<stdio.h>
  

int main(){

    //array of integer 
    int arrayOfInteger[11]={0,1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        int squre=i*i;
        if(squre<10)printf("%d\t" ,arrayOfInteger[squre]);
        else if(i*i>=10) break;
    }
    printf("\n");

    //array of char  method 1 
    char* name="prit";
    int lenth=4;
    for(int charCounter=0;charCounter<lenth;charCounter++)printf("%c",name[charCounter]);\
    printf("\n");
    //array of char method 2
    char arrayOfCharater[16]="array of the day";
    for(int i=0;i<16;i++){printf("%c",arrayOfCharater[i]);}
    printf("\n");
    //array of char =string method 3
    char arrayOfChar_String[]="this is string";
    printf("%s\n", arrayOfChar_String); 
    printf("%s\n",arrayOfCharater);
    printf("%s\n",name );
    
    return 0;
    
}