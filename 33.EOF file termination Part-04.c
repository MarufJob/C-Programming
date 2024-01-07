#include <stdio.h>
int main()

{
    int a,sum,n,i,T;

    printf("How many times sum:");
    scanf("%d",&T);

    while(T--){
    scanf("%d",&n);
    sum=0;
    for(i=1; i<=n; i++)
        {
        scanf("%d",&a);
        sum=sum+a;

        }
    printf("sum = %d",sum);

    }


    return 0;
}
//In this program user will input his  according his own way
//Advanced loop for programming contest

/*
Input:2      1
             2
Output:sum = 2

Input:3       2
              4
              5
Output:sum = 11
*/

