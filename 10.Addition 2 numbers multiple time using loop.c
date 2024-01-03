#include <stdio.h>
int main ()


{
    int num1,num2;
    int n;
    scanf("%d",&n);
    for(n; n<=10; n++){
         //printf("1st n = %d\n",n);
        if(n>=0){
            scanf("%d%d",&num1,&num2);
            printf("%d\n",num1+num2);
            //printf("2nd n = %d\n",n);
        }
        //printf("3nd n = %d\n",n);
    }

    return 0;
}

/*
input: 9
output: 7 7
        14
        8 8
        16
*/






