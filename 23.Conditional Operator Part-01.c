#include <stdio.h>
int main()

{
    int a,b,c,d;
    a=5;
    b=10;
    (a<b) ? printf("%d\n",a) : printf("%d\n",b);
    
    c=45,d=55;
    (c>d) ? printf("%d\n",c): printf("%d\n",d);

    return 0;
}

/*
output: 5
        55
*/