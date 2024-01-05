//Conditional Statement if and else
#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    
    if (a%2==0)
        printf("Even %d",a);
    else
        printf("Odd %d",a);
    
    return 0;
}

/*
Input: 135
Output:Odd 135

Input: 70
Output:Even 70
*/