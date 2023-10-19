#include<errno.h>
#include<stdio.h>

extern int errno;


int main(void){
    FILE *file;
    file=fopen("new","r");
        printf("hello world");
        printf("errno value: %d \n ", errno );
    
    return 0;
}