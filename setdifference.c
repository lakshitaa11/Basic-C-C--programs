//A - B
// #include<stdio.h>
// int main(){
//     int i, j, m, n, l, k = 0, a[100], b[100], c[100];
//     printf("Enter no. of elements of set A:");
//     scanf("%d", &m);
//     printf("Enter the elements: \n");
//     for(i = 0; i < m; i++)
//     {
//         scanf("%d", &a[i]);   
//     }
//     printf("Enter no. of elements of set B:");
//     scanf("%d", &n);   
//     printf("Enter the elements: \n");
//     for(j = 0; j < n; j++)
//     {
//         scanf("%d", &b[j]);   
//     }
//     for(i = 0; i < m; i++)
//     {
//         for(j = 0; j < n; j++)
//         {
//             if(b[j] == a[i])
//             break;
//         }
//         if(j == n)
//         {
//             for(l = 0; l < k; l++)
//             {
//                 if(c[l] == a[i])
//                 break;
//             }
//         }
//         if(l ==k)
//         {
//             c[k] = a[i];
//             k++;
//         }        
//     }
//     printf("Difference of set A-B is:");
//     for(i = 0; i < k; i++)
//     {
//         printf("%d\n", c[i]);
//     }  
//     return 0;
// }

//B-A
#include<stdio.h>
int main(){
    int i, j, m, n, l, k = 0, a[100], b[100], d[100];
    printf("Enter no. of elements of set A:");
    scanf("%d", &m);
    printf("Enter the elements: \n");
    for(i = 0; i < m; i++)
    {
        scanf("%d", &a[i]);   
    }
    printf("Enter no. of elements of set B:");
    scanf("%d", &n);   
    printf("Enter the elements: \n");
    for(j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);   
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            if(b[i] == a[j])
            break;
        }
        if(j == m)
        {
            for(l = 0; l < k; l++)
            {
                if(d[l] == b[i])
                break;
            }
        }
        if(l ==k)
        {
            d[k] = b[i];
            k++;
        }        
    }
    printf("Difference of set A-B is:");
    for(i = 0; i < k; i++)
    {
        printf("%d\n", d[i]);
    }  
    return 0;
}

   