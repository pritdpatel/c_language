#include<stdio.h>
#include<stdbool.h>
struct new_Custom_datatype{
    int Int;
    char Char;

};

union New_Custom_Union_Datatype {
    int Int;
    char Char;
};


//enum --> enumator
 enum Option{
    high=1, medium, low
 };




int main(){

    //these are build-in datatypes 
    
    //number dataypes  
    int Int=34310;   //output 34310    size   4
    unsigned int Unsigned_Int=-34;  //output -34    size 4
    signed int Signed_Int=-23;  //output -23    size 4
    short int Short_Int= 233;   //output 233    size 2
    long int Long_Int =34343l;   // output 34343 size 4
    long long int Long_Long_Int = 34343434343434343L;  //output 34343434343434343   size 8   

    //number with dot 
    float Float= 232.23;
    double Double=101.100;

    //charater 
    char Char ='s';
    
    //boolean
    bool TrueOrFalse=true;   //for this ,we need to import bool from  stdbool.h

    //these three datatypes are fixed in value.
    const int Const_Int= 34;
    const float Const_Float=3434.34;
    const char Const_Char='e';

    //we can create new datatype using  two different build-in or custom datatype
    //struct is one of option for making datatype  where you can use every datatype that offer 
        struct new_Custom_datatype new_datatype;
        new_datatype.Int=10;
        new_datatype.Char='a';
    // with union we can set only one  of all datatypes that union offer; we can save space 

    union New_Custom_Union_Datatype new_Custom_datatype;
    new_Custom_datatype.Char='a';
    new_Custom_datatype.Int=50;
    
    printf(" %c   %d ",new_Custom_datatype.Char , new_Custom_datatype.Int);

    enum Option option;
    option=low;



    return 0;
}