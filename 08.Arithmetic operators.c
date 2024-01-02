#include <stdio.h>
int main()
{
    int A,B,Sum,Sub,Div,Mul,Mod;
    scanf("%d %d",&A,&B);

    Sum = A+B;
    Sub = A-B;
    Div = A/B;
    Mul = A*B;
    Mod = A%B;


    printf("Sum = %d\n",Sum);
    printf("Sub = %d\n",Sub);
    printf("Div = %d\n",Div);
    printf("Mul = %d\n",Mul);
    printf("Mod = %d\n",Mod);

    return 0;
}
/*
input: A=9, B=5
output: Sum = 14
        Sub = 4
        Div = 1
        Mul = 45
        Mod = 4
input: A=11, B=7
output: Sum = 18
        Sub = 4
        Div = 1
        Mul = 77
        Mod = 4
        
*/