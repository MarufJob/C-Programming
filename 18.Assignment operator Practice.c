#include <stdio.h>
int main()
{
    int a;
    int b;
    a=5;
    b=10;

    a+=b;
    printf("The result is a+=b = %d\n",a);
    a-=b;
    printf("The result is a-=b = %d\n",a);
    a*=b;
    printf("The result is a*=b = %d\n",a);
    a/=b;
    printf("The result is a/=b = %d\n",a);
    a%=b;
    printf("The result is a%=b = %d\n",a);

    return 0;
}


/*
output: The result is a+=b = 15
        The result is a-=b = 5
        The result is a*=b = 50
        The result is a/=b = 5
        The result is a%=b = 5
*/