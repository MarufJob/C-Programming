#include <stdio.h>
int main()
{
    float R;
    float pi;
    float div_result;
    scanf("%f",&R);
    pi=3.14159;
    //div_result=(4 * pi * R*R*R)/3;
    //div_result=(4.0/3.0) * pi * R*R*R;
    div_result=(4/3.0) * pi * R*R*R;
    printf("VOLUME = %.3f\n",div_result);

    return 0;
}

/*  *****Notes*****
    div_result=(4/3) * pi * R*R*R; 
    It's not work
    In C programming, when you perform the division operation using integers, the result will be an integer. In the line of code you mentioned, `(4/3)` will result in `1` because both `4` and `3` are integers.

    To fix this issue, you can change either `4` or `3` to a float value. For example, you can write `(4.0/3)` or `(4/3.0)` to ensure that the division operation produces a float result.
    */

/*
input: R = 5
output: VOLUME = 523.598

input: R = 9
output: VOLUME = 3053.626
*/
