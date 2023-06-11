#include<stdio.h>
int main() {
    int a, b;
    a = b = 0;
    scanf("%*d %d", &a, &b);
    printf("%d %d\n", a, b);
    return 0;
}
