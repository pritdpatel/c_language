#include<stdio.h>
#include<windows.h>

int WINAPI WinMain(HINSTANCE hint,HINSTANCE hprevin,LPSTR args,int ncmdshow){
    int ss=MessageBox(NULL,"Hello, World","my first GUI", MB_DEFBUTTON4);
    printf("this is got return: %d",ss);
    return 0;
}