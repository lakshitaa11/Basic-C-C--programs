#include<stdio.h>
int main()
{
    int a[100], n, i, temp = 0;
    printf("Enter the number of candles:");
    scanf("%d", &n);
    printf("Enter length of candles:");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n; i++)
    {
        if(temp < a[i])
        {
            temp = a[i];
        }
    }
    printf("The room will be bright for %d days\n", temp);
    return 0;
}