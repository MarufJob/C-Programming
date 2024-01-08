///Fibonacci number 

#include <stdio.h>
int main()
{
    int i;
    int a=0,b=1,c;

    while(a<=610){
       printf("%d ",a);
       c=a+b;
       a=b;
       b=c;
    }


    return 0;
}

//Output:0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 
