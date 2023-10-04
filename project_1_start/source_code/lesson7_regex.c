/*
    name: prit patel
    description: learn and use regex syntax
*/
//import header files here
#include<stdio.h>

int main(){
    int Int;
    printf("Enter your number except 5 \n");
    scanf("%[^5]", Int);

    printf("Int: %d ", Int);

}