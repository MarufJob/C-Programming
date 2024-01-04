#include <stdio.h>
int main()

{
    int a,b,c,d;
    a = 5;
    b = 10;
    c = (a>b) ? a : b;
    printf("%d\n",c);
    d = (a<b) ? a : b;
    printf("%d\n",d);
    return 0;
}

/*
output: 10
        5
*/
