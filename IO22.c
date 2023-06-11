#include<stdio.h>
int main() {
    int hour, min, second;
    sscanf(__TIME__, "%d%*c%d%*c%d", &hour, &min, &second);
    printf("%02d:%02d:%02d\n", hour+1, min, second);
    return 0;
}
