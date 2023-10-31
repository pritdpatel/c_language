#include<stdio.h>
#include<wchar.h>
#include<windows.h>


//variodic functions
 int counter(int number,...){
    int final_number=0;
    va_list ap;
    va_start(ap,number);
        for(int i=0;i<number;i++){
            final_number+=va_arg(ap,int);
        }
    va_end(ap);

    return final_number;
 }

//  #include<string.h>
// int func(int a,int b, int c){
//     return a+b+c;
// }

// typedef struct call{
//     int number;
//     char print[100];
//     int number2;

// }callback;

int main(void){
    // wchar_t* pofstring=L"this is string";
    // printf("lenthh=%d , string=%ls",wcslen(pofstring),pofstring);
    // #define a(a,b,c) func(a,b,c)
    // int b=a(1,2,3) ;
    // printf("\n%d     \n",b);
    // wchar_t c=L'A';
    // char ss=c;
    // printf("%c=%d ,  %c=%d",ss,sizeof(ss),c,sizeof(c));


    // char string[100];
    // sprintf(string,"this is best for number %d to %d",0,9);
    // MessageBox(NULL,string,"header",MB_CANCELTRYCONTINUE);

    // callback call_back={.number=1,.number2=20,.print="this need to print"};
    // printf("%s  %d  %d",call_back.print, call_back.number ,call_back.number2);

    int ss=counter(3,5,5,5);
    printf("%s");
    return 0;
}