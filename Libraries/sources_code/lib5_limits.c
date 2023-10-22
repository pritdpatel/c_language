#include<stdio.h>
#include<limits.h>

#pragma pack(push,4)


typedef struct
{
    char first;
    int second;
    char last;
}lib;

#pragma pack(pop)
int main(void){
    printf("this is limit of char : %d", sizeof(lib));
}