#include <stdio.h>

void print_and_save_even_numbers(int arr[], int n, int result[]) {
    int i, j = 0;
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
        if (arr[i] % 2 == 0) {
            result[j++] = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result[n];

    print_and_save_even_numbers(arr, n, result);

    printf("\nEven numbers: ");
    for (int i = 0; i < n; i++) {
        if (result[i] % 2 == 0) {
            printf("%d ", result[i]);
        }
    }
    printf("\n");

    return 0;
}