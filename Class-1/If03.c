#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n%2);
    if (1 == n%2)
        printf("Odd\n");
    else if (-1 == n%2)
        printf("Odd\n");
    else
        printf("Even\n");
    return 0;
}
