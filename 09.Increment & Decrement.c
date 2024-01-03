#include <stdio.h>
int main()

{
    int a, b;
    a=5;
    b=11;

    printf("a= %d\n",a);
    a++;
    printf("a= %d\n",a);
    printf("a= %d\n",a++);
    printf("a= %d\n",++a);
    
    printf("b= %d\n",b);
    b--;
    printf("b= %d\n",b);
    printf("b= %d\n",b--);
    printf("b= %d\n",--b);

    return 0;
}

/*
output: a= 5
        a= 6
        a= 6
        a= 8
        b= 11
        b= 10
        b= 10
        b= 8
*/

// a++ ----> The value will be added 1(after) b--
// ++a ----> The value will be added 1(before) --b

