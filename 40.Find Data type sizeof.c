//bool -> char -> int -> float -> double

#include <stdio.h>
#include <stdbool.h> //bool' is defined in header '<stdbool.h>'

int main()

{

    printf("bool size %d\n",sizeof(bool));
    
    printf("char size %d\n",sizeof(char));
    
    printf("int size %d\n",sizeof(int));
    
    printf("float size %d\n",sizeof(float));
    
    printf("double size %d\n",sizeof(double));

    return 0;
}

/*
Output: bool size 1
        char size 1
        int size 4
        float size 4
        double size 8
*/
