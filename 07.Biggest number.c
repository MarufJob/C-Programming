#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c)
        printf("%d is the biggest number\n",a);

    if(b>a && b>c)
        printf("%d is the biggest number\n",b);

    if(c>a && c>b)
        printf("%d is the biggest number\n",c);

    return 0;
}

/*
input: 55 6 44
output: 55 is the biggest number

input: 33 77 99
output: 99 is the biggest number
*/

