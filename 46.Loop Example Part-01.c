///Example Print all integer between m and n in ascending order

///Input 6 12  // Here print will be from 6 to 12
/// Output 6 7 8 10 11 12

///Input 6 2   //Here print will be form 2 to 6**
/// Output 2 3 4 5 6


#include <stdio.h>
int main()
{

    int i;
    int start,end;
    int temp;

    scanf("%d %d",&start,&end);
    if(start>end)
        {
            temp=start;
            start=end;
            end=temp;
        }

    for(i=start; i<=end; i++)
    {
        printf("%d ",i);
    }

    return 0;
}

/*
Input:15 5
Output:5 6 7 8 9 10 11 12 13 14 15 

Input:4 -3
Output:-3 -2 -1 0 1 2 3 4 
*/