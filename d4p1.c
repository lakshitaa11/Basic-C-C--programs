//Program to find if the given no is a palindrome.
#include<stdio.h>
int ispalindrome(int n)
{
    int temp, rem, rev = 0;
    temp = n;
    while(n!=0)
    {
        rem = n % 10;
        rev = (rev*10) + rem;
        n = n/10;
    }
    if(rev == temp) return 0;
    else return 1;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if(ispalindrome(n) == 0)
    printf("%d is a palindrome\n", n);
    else
    printf("%d is not a palindrome\n", n);

    return 0;
}