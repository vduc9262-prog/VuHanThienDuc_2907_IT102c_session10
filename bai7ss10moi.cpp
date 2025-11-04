#include <stdio.h>
int main() {
    int n, target;
    int arr[100];

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap mang da sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Nh?p s? c?n t?m
    printf("Nhap so can tim: ");
    scanf("%d", &target);

    int left = 0;
    int right = n - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            break;
        }

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (result != -1)
        printf("Tim thay tai chi so: %d\n", result);
    else
        printf("Khong tim thay\n");

    return 0;
}
