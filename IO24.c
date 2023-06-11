#include<stdio.h>
int main() {
    int i;
    freopen("output.txt", "w", stdout);
    for (i=32; i<256; i++)
        printf("%d = %c\n", i, i);
    printf("\n");
    return 0;
}
