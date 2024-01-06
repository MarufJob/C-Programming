#include <stdio.h>
int main()


{
    double a = 456.23;
     int b=100;
     b=(int)a;
     
    double c = 35.678;
    int d;
    d = (int)c;
    char e = (char)d;

    printf("%d\n",b);

    printf("%d\n",d);
    
    printf("%c\n",e);
    
    return 0;
}

/*
Output: 456
        35
        #
*/