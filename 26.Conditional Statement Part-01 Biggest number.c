//Conditional Statement if
#include <stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if (a>b && a>c)
        printf("Biggest number is %d",a);
    if (b>a && b>c)
        printf("Biggest number is %d",b);
    if (c>b && c>a)
        printf("Biggest number is %d",c);

    return 0;
}

/*
Input: 33 99 55
Output:Biggest number is 99 
*/