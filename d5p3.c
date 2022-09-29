#include<stdio.h>
int main()
{
    int a[100], n, i, sum1 = 0, sum2 = 0, product;
    printf("Enter the no. of elements to input:");
    scanf("%d", &n);
    printf("Enter array elements:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int div = n/2;
    for(i = 0; i < div; i++)
    {
        sum1 = sum1 + a[i];
    }
    for(i = div; i < n; i++)
    {
        sum2 = sum2 + a[i];
    }
    product = sum1 * sum2;
    printf("The sum of first half is %d\n", sum1);
    printf("The sum of second half is %d\n", sum2);
    printf("Product of sum of two sub arrays is: %d\n", product);
    return 0;
}