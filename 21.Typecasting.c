#include <stdio.h>
int main()
{
    int A=63;
    int B=2;
    int C;
    char Ch='M';
    
    C=Ch;
    Ch=A;

    printf("%.2f\n",(float)A/(float)B);
    // printf("%.2f\n",(float)A/B);
    // printf("%.2f\n",A/(float)B);
    printf("%d\n",C);
    printf("%.c",Ch);
    // printf("%.2f",(float)a/(float)b);

    return 0;
}

// if we want to use int as float--
// in printf then we will have to use the above process

/*
output: 31.50
        77
        ?
*/