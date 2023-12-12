#include <stdio.h>

int main() {

int arr[16], i = 0, num;
printf("Masukkan data yang akan disimpan kedalam array : ");

do {
    scanf("%d", &num);
    if (num % 2 == 0 && num > 9) {
        arr[i] = num;
        i++;
    }
} while (num != 999);

printf("Data yang tersimpan kedalam array : \n");

for (int j = 0; j < i; j++) {
    printf("%d ", arr[j]);
}

return 0;
}