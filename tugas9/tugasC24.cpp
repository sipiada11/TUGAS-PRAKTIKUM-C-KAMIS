#include <stdio.h>

int main() {
    int N, i, count;

    printf("Masukkan sebuah nilai integer N: ");
    scanf("%d", &N);

    int arr[50];
    printf("Masukkan isi array (0 untuk berhenti): ");

    for(i = 0; i < 50; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] == 0) break;
    }

    count = 0;
    for(i = 0; i < 50; i++) {
        if(arr[i] == N) {
            count++;
        }
    }

    if(count > 0) {
        printf("ADA, nilai yang sama dengan N sebanyak %d kali.\n", count);
    } else {
        printf("TIDAK ADA.\n");
    }

    return 0;
}