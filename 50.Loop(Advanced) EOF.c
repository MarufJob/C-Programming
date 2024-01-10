/*
while (scanf("%d %d", &a, &b) != EOF):

This creates a loop that continues as long as there's valid input to be read:
scanf("%d %d", &a, &b): This reads two integer values from the user and stores them in a and b.
!= EOF: The loop continues as long as scanf doesn't return EOF (end-of-file), indicating there's still input available.
*/

#include <stdio.h>
int main()
{
    int a,b,sum;

    while(scanf("%d %d",&a,&b)!=EOF) ///Ctrl+Z for ending the program execusion
        {
    sum=a+b;
    printf("%d\n",sum);

    }

    return 0;
}

/*
Input:55 55
Output:110

Input:678 323
Output:1001

Input:345 678
Output:1023
*/
