#include<stdio.h>
int main() {
    int hour, min, second;
    scanf("%d:%d:%d", &hour, &min, &second);
    printf("%02d:%02d:%02d\n", hour, min, second);
    return 0;
}
