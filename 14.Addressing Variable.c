#include <stdio.h>
int main()
{
    int a,b,c;
    a=5;
    b=7;
    c=7;
    
    printf("a = %d and the address of a is %d\n",a,&a);
    printf("b = %d and the address of b is %d\n",b,&b);
    printf("c = %d and the address of c is %d\n",c,&c);
        
    double age = 25.5;
    //float age = 25.5;
    printf("Your age is: %d\n", &age);  // Directly accessing the variable 'age'
    
    int value = 100;
    int *ptr = &value;  // ptr now stores the address of 'value'
    printf("Value stored at the address: %d\n", *ptr);  // Accessing the value using the pointer
    printf("Value stored at the address: %d\n", ptr);
    
    
    return 0;
}

/*
output: a = 5 and the address of a is 234686564
        b = 7 and the address of b is 234686560
        c = 7 and the address of c is 234686556
        Your age is: 234686544
        Value stored at the address: 100
        Value stored at the address: 234686540
*/
