#include <stdio.h>
int main()
{
    int a,sum,n,i;

    scanf("%d",&n);
    sum=0;

    for(i=1; i<=n; i++)
    {
    scanf("%d",&a);
    sum=sum+a;
    }
   printf("%d",sum);


    return 0;
}

/*
Input:  3
        4 5 6
Output:15

Input:  5
        9 7 5 3 1
Output:25

Input:  4
        1 2 3 4
Output:10
*/
