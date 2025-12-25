#include <stdio.h>
int main() {
    int num;
    
    printf("Enter a number : ");
    scanf("%d", &num);

    if (num >= 0)
        printf("Num is Positive : ");
    else
        printf("Num is Negative : ");
    
    return 0;
}