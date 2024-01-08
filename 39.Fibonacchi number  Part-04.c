///Fibonacci number 

#include <stdio.h>
int main()
{
    int n,T;
    int i;
    int a,b,c;
    printf("How many time take input: ");
    scanf("%d",&T);

    while(T--){
        printf("nth fibonacci number: ");
        scanf("%d",&n);
        a=0,b=1;   ///assigned here so that the value of a and b can't be updated.
        for(i=1; i<=n; i++){
            if(i==n)
            printf("The %dth fibonacci number is %d\n",i,a);
            //printf("%d\n",a);
            c = a+b;
            a = b;
            b = c;
        }
    }


    return 0;
}

/*
       How many time take input: 3

Input:nth fibonacci number: 7
Output:The 7th fibonacci number is 8

Input:nth fibonacci number: 14
Output:The 14th fibonacci number is 233

Input:nth fibonacci number: 21
Output:The 21th fibonacci number is 6765

*/