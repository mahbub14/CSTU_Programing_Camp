#include<stdio.h>
int main() {
    int hour, min, second;
    scanf("%d%*c%d%*c%d", &hour, &min, &second);
    printf("%02d:%02d:%02d\n", hour, min, second);
    return 0;
}
