#include<stdio.h>
void task1();
void task2(int);
int task3(int, int);
void task4(int* );
int main(){
    task1();// print welcome
    task2(10);  //pass data
    task2(task3(4,12)); 
    int Int=21;
    int* Pointer;
    Pointer=&Int;
    task4(Pointer); //reference 
    return 0;
}

void task1(){
    printf("Welcome to all\n");

}
void task2(int data){
    printf("\t\t%d\n",data);
}
int task3(int a, int b){
    return a+b;
}
 void task4(int* p){
    printf("\t\t%d \n", *p);
 }
