#include<stdio.h>
#include<assert.h>


int magic(int size,char Char,int* ptr);

int main(){
    int i=40;
    magic(35,'a',&i);
    printf("\nDone");
    return 0;
}

int magic(int size,char Char, int* ptr){
    assert(ptr != NULL);
    assert(size >30);
    assert(Char =='a');
    return 0;
}