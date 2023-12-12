#include <stdio.h>

int main() {
    int waktu;
    float kecepatan = 2.0; // m/s
    float jarak = 0.0; // m

    for(waktu = 1; waktu <= 100; waktu++) {
        jarak += kecepatan;
        printf("Setelah %d detik, jarak yang telah dia tempuh adalah %.2f meter.\n", waktu, jarak);
    }
    printf("\n");
    return 0;
}