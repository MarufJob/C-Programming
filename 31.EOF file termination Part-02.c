#include <stdio.h>
int main()

{
    int a, sum,n,i;

    while(scanf("%d",&n)!=EOF){
    sum=0;
    for(i=1; i<=n; i++){
        scanf("%d",&a);
        sum=sum+a;

    }
    printf("Sum = %d\n",sum);
    }


    return 0;
}
//EOF will be used where there inputting process is closed.
//Advanced loop for programming contest
/*
Input:2     4
            4
Output:Sum = 8
Input:3     2
            3
            4
Output:Sum = 9
Input:5     1
            2
            3
            4
            5
Output:Sum = 15
*/
