#include <stdio.h>

int main() {
    float uangAwal = 1000000.0;
    float bunga = 0.02;
    float uang = uangAwal;

    for(int bulan = 1; bulan <= 10; bulan++) {
        uang = uang * (1 + bunga);
        printf("Setelah %d bulan, jumlah uang yang telah dihasilkan adalah Rp %.2f.\n", bulan, uang);
    }
    printf("\n");
    return 0;
}