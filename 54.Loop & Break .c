#include <stdio.h>
int main()
{
        int i;

        for (i=0; i<10; i++)
        {
            printf("%d ",i);
        if(i==3)
            break;
        }
            return 0;
}

/*
Output:0 1 2 3 //then break
*/
