#include<stdio.h>

int main()
{
    int n;
    //linear search
    scanf("%d", &n);
    int arr[n];
    for (int index = 0; index < n; index++)
    {
        int val;
        scanf("%d", &val);
        arr[index] = val;
    }

    int searchValue;
    scanf("%d", &searchValue);
    int result =  -1;
    for (int index = 0; index < n; index++)
    {
        if (arr[index] == searchValue)
            result = index;

    }
    printf("%d", result);
}

