#include <stdio.h>
int main()

 {
    int x_plus_y;
    int x_minus_y;
    float x;
    float y;

    printf("Enter X+Y:");
    scanf("%d",&x_plus_y);

    printf("Enter X-Y:");
    scanf("%d",&x_minus_y);

    x=(x_plus_y+x_minus_y)/2.0;
    y=(x_plus_y-x_minus_y)/2.0;

    printf("The value of X and Y are %.2f and %.2f",x,y);

  return 0;

  }
/*
input:
Enter X+Y:30
Enter X-Y:15
output:
The value of X and Y are 22.50 and 7.50
*/