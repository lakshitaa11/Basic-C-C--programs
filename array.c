#include<stdio.h>
int main()
{
    int sum = 0, i, n, missing;
    printf("Enter array size :");
    scanf("%d", &n);
    int a[n-1];
    printf("Insert array elements :");
    for(i = 0; i < n-1; i++)
    {
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    missing = (n * (n + 1)/ 2) - sum;
    printf("The missing element is :%d\n", missing);
    return 0;
}