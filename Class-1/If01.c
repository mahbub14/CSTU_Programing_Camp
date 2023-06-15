#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (0 == n%2)
        printf("Even\n");
    else
        printf("Odd\n");
    return 0;
}
