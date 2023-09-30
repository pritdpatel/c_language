#include<stdio.h>
void task1();
void task2(int);
int task3(int, int);
int main(){
    task1();// print welcome
    task2(10);  //pass data
    task2(task3(4,12));
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
