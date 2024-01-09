#include <stdio.h>
int main()
{
    int yr;
    scanf("%d",&yr);
    
    
    // if(yr%4==0)
    // {
    //     if( yr%100==0)
    //     {
    //         if(yr%400==0)
    //             printf("%d is a leap year.",yr);
    //         else
    //             printf("%d is not a leap year.", yr);
    //     }
    //     else
    //         printf("%d is a leap year.",yr );
    // }
    // else
    //     printf("%d is not a leap year.",yr);
    
    
    if(yr%4==0 && yr%100!=0)
        printf("%d is a leap year.",yr);
        
    else if(yr%400==0)
        printf("%d is a leap year.",yr);
    
    else
        printf("%d is not a leap year.",yr);
    

    return 0;
}

/*
Input:2000
Output:2000 is a leap year.

Input:1900
Output:1900 is not a leap year.

Input:1954
Output:1954 is not a leap year.
*/
