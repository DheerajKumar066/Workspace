#include <stdio.h>

int main() 
{
    int n, revN = 0, remind, origN;
    printf("Enter an integer: ");
    scanf("%d", &n);
    originalN = n;
    // reversed integer is stored in reversedN
    while (n != 0) {
        remind = n % 10;
        revN = revN * 10 + remind;
        n /= 10;
    }
    // palindrome if orignalN and reversedN are equal
    if (origN == revN)
        printf("%d is a palindrome.", origN);
    else
        printf("%d is not a palindrome.", origN);
    return 0;
}
