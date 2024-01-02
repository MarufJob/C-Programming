#include <stdio.h>
int main()
{
    float num1;
    float num2;
    float num3;
    float result;
    scanf("%f %f %f",&num1,&num2,&num3);
    result=(num2*num2-4*num1*num3)/2*num1;
    printf("%.2f",result);
return 0;
}

/*
input: 2 3 4
output:
(3x3-4x2x4)+2x2 = -23

input: 3 5 7
output:
(5x 5-4 x 3 x7) + 2 x 3= -88.5

*/
