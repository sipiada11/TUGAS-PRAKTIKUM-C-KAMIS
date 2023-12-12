#include <stdio.h>

int main() {
    char C, i, count;

    printf("Masukkan sebuah karakter: ");
    scanf(" %c", &C);

    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};

    count = 0;
    for(i = 0; i < 20; i++) {
        if(A[i] == C) {
            count++;
        }
    }

    if(count > 0) {
        printf("ADA, karakter tersebut ada %d kali di dalam array.\n", count);
    } else {
        printf("TIDAK ADA.\n");
    }

    return 0;
}