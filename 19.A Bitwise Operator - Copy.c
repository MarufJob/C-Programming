//Bitwise Operator

// & | ^ << >>
// & -->and |-->or ^-->Exclusive or >> ... Right shift or << ...Left shift or ~ ... Bitwise Not
#include <stdio.h>
int main()

{
    int a,b;
    a=32;
    b=12;
    printf("%d %d %d",a&b,a|b,a^b);
    
    return 0;
}

//  Sonkha 2^n
//  Maximum Value 2^n - 1
//Binary conversion of 12 is 1100


/* 
output: a=32 -> 00100000
        b=12 -> 00001100
        a&b= -> 00000000 ->0
        
        a=32 -> 00100000
        b=12 -> 00001100
        a|b= -> 00101100 ->44
        
        a=32 -> 00100000
        b=12 -> 00001100
        a^b= -> 00101100 ->44
        
*/