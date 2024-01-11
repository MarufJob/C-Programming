#include <stdio.h>
int main()
{
    int a,b,sum,n,i;

    while(scanf("%d",&n)!=EOF){
    sum=0;

    for(i=1; i<=n; i++)
    { scanf("%d",&a);
     sum=sum+a;
    }
   printf("%d\n",sum);
}

    return 0;
}


/*
Input:  3
        1 2 3
Output: 6

Input:  5
        1 2 3 4 5
Output:15
*/