#include <stdio.h>
int main() {
    int n, id;
    int arr[100];

    printf("Nhap so luong san pham: ");
    scanf("%d", &n);

    printf("Nhap gia ban cua %d san pham:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Danh sach gia san pham sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Nhap ma san pham (index): ");
    scanf("%d", &id);

    // Ki?m tra index h?p l?
    if (id < 0 || id >= n) {
        printf("Khong tim thay\n");
        return 0;
    }
    
    int left = 0, right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (mid == id) {
            result = mid;
            break;
        }

        if (mid < id)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (result != -1)
        printf("Gia san pham voi ma %d: %d\n", id, arr[result]);
    else
        printf("Khong tim thay\n");

    return 0;
}
