    // if(a==55){
    //   break;
    // }
    
//***break***  This error message means that the "break" statement is being used outside of a loop or switch statement. In programming, the "break" statement is used to exit a loop or switch statement. If it is used outside of these structures, it will result in an error.

/*use it close the loop

if(a==50){
        printf("50 End ");
        return 0;
        }
*/


#include <stdio.h>
int main()
{
    int a=1;


    start:
    
        printf("%d ",a);
        a++;
        
        if(a==50){
        printf("50 End ");
        return 0;
        }
            goto start;

    return 0;
}

//Output:1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39 40 41 42 43 44 45 46 47 48 49 50 End 
