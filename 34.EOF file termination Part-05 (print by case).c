#include <stdio.h>
int main()

{
    int a,sum,n,i,T,j;
    
    printf("How many times sum:");
    scanf("%d",&T);

   for(j=1;j<=T;j++){
    scanf("%d",&n);
    sum=0;
    for(i=1; i<=n; i++)
        {
        scanf("%d",&a);
        sum=sum+a;

        }
    printf("Case #%d : %d\n",j,sum);

    }

    return 0;
}
//In this program user will input his  according his own way
//Advanced loop for programming contest

/*
How many times sum:3

Input:2          3
                 5
Output:Case #1 : 8

Input:3           4
                  5
                  6
Output:Case #2 : 15

Input:5           6
                  2
                  3
                  4
                  5
Output:Case #3 : 20
*/