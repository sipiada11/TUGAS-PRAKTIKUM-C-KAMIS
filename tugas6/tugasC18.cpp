#include <stdio.h>

int main() {
    int i;
    for(i = 1; i <= 1024; i *= 2) {
        printf("%d ", i);
    }
    printf("\n");
    return 0;
}