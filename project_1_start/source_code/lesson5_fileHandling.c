/*
    name: prit patel
    file name: lesson5_fileHandling.c
    date: October 2, 2023
*/

#include<stdio.h>
char* task1_encryption(char*);
void task2_decryption(char*);
int main(){
    //data encryption
    char string_text[64]="this is prit and here is my text";
    char* string_encrypted;
    string_encrypted=task1_encryption(string_text);

    // file tag 
    FILE* filePointer;
    FILE* fileRead;
    //opening or creating  file 
    filePointer=fopen("newFile.txt","w");
    //writing data into file 
    fprintf(filePointer,string_encrypted);
    char getData[64];
    

    //closing file 
    fclose(filePointer);

    //read newFile.txt
    //open newfile 
    fileRead=fopen("newFile.txt","r");
    //get the data using fgets function
    fgets(getData,64,fileRead);
    //decryption of data
    task2_decryption(getData);
    //print data 
    printf("%s", getData);
    //close the file 
    fclose(fileRead);
    return 0;
}

char* task1_encryption(char* text){
    char key[64]="dx9Hque+h4jgoRBhceGxQOOiG+X5Vs0Ge8EQWvFbg0c7WDLQ4/kZp4zlDxYwnfJd";
    for(int i=0;i<64;i++){
        text[i]=text[i]+key[i];
    }
    return text;
}
void task2_decryption(char* data ){
    char key[64]="dx9Hque+h4jgoRBhceGxQOOiG+X5Vs0Ge8EQWvFbg0c7WDLQ4/kZp4zlDxYwnfJd";
    for(int i=0;i<64;i++){
        data[i]=data[i]-key[i];
    }
    

}