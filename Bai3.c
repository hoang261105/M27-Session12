#include <stdio.h>

void findSymmetricPairs(int arr[], int n) {
    int hasSymmetric = 0; 

    printf("Cac cap phan tu doi xung:\n");
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] == arr[n - i - 1]) {
            printf("Cap doi xung: (%d, %d)\n", arr[i], arr[n - i - 1]);
            hasSymmetric = 1;
        }
    }

    if (!hasSymmetric) {
        printf("Mang khong co phan tu doi xung.\n");
    }
}

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("So luong phan tu phai lon hon 0.\n");
        return 0;
    }

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    findSymmetricPairs(arr, n);

    return 0;
}


