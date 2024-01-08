///Fibonacci number

#include <stdio.h>
int main()
{
    int i,n;
    int a=0,b=1,c;
    printf("nth fibonacci number: ");
    scanf("%d",&n);
    

    for(i=1; i<=n; i++){
            if(i==n)
       printf("The %dth fibonacci number is %d ",i,a);
       c=a+b;
       a=b;
       b=c;
    }


    return 0;
}

/*
Input:nth fibonacci number: 5
Output:The 5th fibonacci number is 3 


Input:nth fibonacci number: 15
Output:The 15th fibonacci number is 377 


Input:nth fibonacci number: 25
Output:The 25th fibonacci number is 46368 
*/
