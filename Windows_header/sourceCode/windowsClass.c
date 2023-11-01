#define UNICODE
#define _UNICODE
#include<windows.h>
#include<stdio.h>
#define null 0
#include "resource.h"


LRESULT CALLBACK windowPeocedure(HWND,UINT,WPARAM,LPARAM); 

int WINAPI WinMain(HINSTANCE hint,HINSTANCE hprevint,LPSTR argv, int ncmdshow){
    
    //define windows class 
    WNDCLASS wc={0};
    wc.hbrBackground=(HBRUSH) COLOR_WINDOW;
    wc.hIcon=LoadIcon(hint,MAKEINTRESOURCE(IDI_ICON));
    wc.hCursor=LoadCursor(NULL,IDC_ARROW);
    wc.hInstance=hint;
    wc.lpszClassName=TEXT("myWindowsClass");
    wc.lpfnWndProc=windowPeocedure;


    if(!RegisterClass(&wc))return -1;
    HWND hwnd =CreateWindow(TEXT("myWindowsClass"),TEXT("main"),WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100,100,700,700,NULL,NULL,NULL,NULL);
    

    MSG msg={0};
    while(GetMessage( &msg, NULL,null,null)){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

LRESULT CALLBACK windowPeocedure(HWND hwnd,UINT Msg ,WPARAM wp,LPARAM lp){
    HDC hdc;
    PAINTSTRUCT ps;
    RECT rect;
    switch(Msg)
    {
        case WM_CREATE:
            PlaySound(TEXT("hellowin.wav"),NULL, SND_ASYNC);
            return 0;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        case WM_PAINT:
            hdc=BeginPaint(hwnd,&ps);
            GetClientRect(hwnd,&rect);
            DrawText(hdc,TEXT("HELLO,WINDOWS 98!"),-1,&rect,DT_SINGLELINE | DT_CENTER | DT_VCENTER);
            EndPaint(hwnd,&ps);
            return 0;
        default:
            return DefWindowProc(hwnd,Msg,wp,lp);
    }
} 