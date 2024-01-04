#include <stdio.h>
int main()
{
    float a=3,base=4,height=6,r=5;
    float Area_S,Area_T,Area_C;
    
    Area_S=a*a;

    Area_T=(1/2.0)*base*height;

    Area_C=3.1416*r*r;

    printf("Area of Square %.2f\n",Area_S);
    printf("Area of a Triangle %.2f\n",Area_T);
    printf("Area of a Circle %.2f\n",Area_C);
  
    return 0;
}

/*
output: Area of Square 9.00
        Area of a Triangle 12.00
        Area of a Circle 78.54

*/