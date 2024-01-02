#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a%5==0 && a%11==0)
        printf("%d is divisible by 5 and 11\n",a);
    if(a%5!=0 || a%11!=0)
        printf("%d is not divisible by 5 and 11\n",a);

       return 0;
}

/*
a = 5
5 is not divisible by 5 and 11

a = 55
55 is divisible by 5 and 11

a = 77
77 is not divisible by 5 and 11
*/
