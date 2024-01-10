///Take n integer as input and print their sum
///Input format: n
///                n1 n2 n3.....nn
///Sample input : 5
///                5 6 9 2 7
///Sample input : 29


#include <stdio.h>
int main()
{
    int sum,a,i,n;
    sum=0;
    printf("Give a number how many number sum = ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        printf("Gibe %d number = ",i);
        scanf("%d",&a);
        sum=sum+a;
    }
    printf("sum of all number = %d",sum);

   return 0;
}

/*
Input:Give a number how many number sum = 5
Gibe 1 number = 1
Gibe 2 number = 2
Gibe 3 number = 3
Gibe 4 number = 4
Gibe 5 number = 5
Output:sum of all number = 15

Input:Give a number how many number sum = 3
Gibe 1 number = 1
Gibe 2 number = 2
Gibe 3 number = 3
Output:sum of all number = 6
*/
