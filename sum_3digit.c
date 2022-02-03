#include<stdio.h>
int main()
{
    int n,sum=0,m;
    printf("Enter the three digit number:");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        sum=sum+m;
        n=n/10;
    }
    printf("The sum of the three digit number is = %d", sum);
    return 0;
}
