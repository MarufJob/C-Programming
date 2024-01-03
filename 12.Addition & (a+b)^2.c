#include <stdio.h>
int main()
{
    int a;
    int b;

    scanf("%d %d",&a,&b);
    
    printf("%d + %d = %d result of a + b\n",a,b,a+b);
    
    printf("%d + %d = %d result of (a+b)^2\n",a,b,(a*a+2*a*b+b*b));
    
    //printf("%d + %d = %d\n",a,b,(2*(a+b))/2);
    //(2*a+b)/2 is not work (2*a)+b/2 -> Sum=(2*(a+b))/2
    return 0;

}

/*
input:3 7
output: 3 + 7 = 10 result of a + b
        3 + 7 = 100 result of (a+b)^2
*/