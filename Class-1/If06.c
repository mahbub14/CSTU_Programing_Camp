#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n%2);
    (n&1)?printf("Odd\n"):printf("Even\n");
    return 0;
}
/*
101
001
---
001
*/
