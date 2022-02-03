//Fibonacci series upto n-terms without recursion
/*
#include<stdio.h>
int main()
{
    int n1 = 0, n2 = 1, n3, i, number;
    printf("Enter the number of terms:");
    scanf("%d",&number);
    printf("\n%d %d", n1, n2);
    for(i = 1; i <= number - 2; i++)
    {
        n3 = n1 + n2;
        printf(" %d ", n3);
        n1 = n2;
        n2 = n3;
    }
    return 0;
}
*/
//Fibonacci series upto n-term using recursion
#include<stdio.h>
