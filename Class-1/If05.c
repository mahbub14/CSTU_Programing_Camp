#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n%2);
    if (n&1)
        printf("Odd\n");
    else
        printf("Even\n");
    return 0;
}
/*
101
001
---
001
*/
