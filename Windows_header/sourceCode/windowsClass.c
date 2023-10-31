#include<windows.h>
#include<stdio.h>
#define null 0
LRESULT CALLBACK windowPeocedure(HWND,UINT,WPARAM,LPARAM); 


int WINAPI WinMain(HINSTANCE hint,HINSTANCE hprevint,LPSTR argv, int ncmdshow){
    WNDCLASSW wc={0};
    wc.hbrBackground=(HBRUSH) COLOR_WINDOW;
    wc.hCursor=LoadCursor(NULL,IDC_ARROW);
    wc.hInstance=hint;
    wc.lpszClassName=L"myWindowsClass";
    wc.lpfnWndProc=windowPeocedure;

    // unsigned short name[]=L"this is name";
    if(!RegisterClassW(&wc))return -1;
    HWND hwnd =CreateWindowW(L"myWindowsClass",L"main",WS_OVERLAPPEDWINDOW | WS_VISIBLE, 100,100,700,700,NULL,NULL,NULL,NULL);
    // printf("hwnd: %d",hwnd);

    MSG msg={0};
    while(GetMessage( &msg, NULL,null,null)){
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    return 0;
}

LRESULT CALLBACK windowPeocedure(HWND hwnd,UINT Msg ,WPARAM wp,LPARAM lp){
    if(Msg==36)printf("size got changed\n");
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