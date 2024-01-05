//Conditional Statement if, else if and else
#include <stdio.h>
int main()
{
    int a;
    printf("Give a number 0-100 calculate grade = ");
    scanf("%d",&a);
    
    if (100>=a && a>=80)
        printf("Grade A+");
        
    else if (80>a && a>=70)
        printf("Grade A");
        
    else if (70>a && a>=60)
        printf("Grade A-");
        
    else  if (60>a && a>=50)
        printf("Grade B");
        
    else  if (50>a && a>=40)
        printf("Grade C");
        
    else  if (40>a && a>=33)
        printf("Grade D");
        
    else  if (33>a && a>=0)
        printf("Grade F");
        
    else
        printf("Give valid number");
    
    return 0;
}

/*
Input: Give a number 0-100 calculate grade = 80
Output:Grade A+

Input: Give a number 0-100 calculate grade = 32
Output:Grade F
*/

