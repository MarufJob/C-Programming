/**
//Comma Operator
( , , , )
*/
#include <stdio.h>
int main()
{
    int a;
    float b;
    int c;
    int d;
    int e;
    float comma;

    comma=(a=5,b=6.5,a+b);
    printf("%.2f\n",comma);

    comma=(c=5,d=10,e=15,c+d+e);
    printf("%.0f\n",comma);

}
//Execute from left to right

/*
output: 11.50
        30
*/
