#include <stdio.h>
int main() {
    int arr[100];  
    int n = 0;
    int choice, pos, value, found;

    printf("——————————————— Quan ly danh sach so nguyen ———————————————\n");

    do {

        printf("\n1. Them phan tu vao vi tri bat ky\n");
        printf("2. Xoa phan tu o vi tri bat ky\n");
        printf("3. Cap nhat gia tri tai vi tri bat ky\n");
        printf("4. Tim kiem phan tu trong mang\n");
        printf("5. Hien thi mang\n");
        printf("6. Sap xep mang (Bubble Sort)\n");
        printf("7. Thoat chuong trinh\n");
        printf("Lua chon cua ban (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                if (n >= 100) {
                    printf("Danh sach da day! Khong the them.\n");
                    break;
                }
                printf("Nhap vi tri can them (0 den %d): ", n);
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                printf("Nhap gia tri: ");
                scanf("%d", &value);
                for (int i = n; i > pos; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;
                printf("Da them thanh cong!\n");
                break;

            case 2:  
                if (n == 0) {
                    printf("Danh sach rong! Khong the xoa.\n");
                    break;
                }
                printf("Nhap vi tri can xoa (0 den %d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
 
                for (int i = pos; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                printf("Da xoa thanh cong!\n");
                break;

            case 3:   
                if (n == 0) {
                    printf("Danh sach rong!\n");
                    break;
                }
                printf("Nhap vi tri can cap nhat (0 den %d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                arr[pos] = value;
                printf("Da cap nhat thanh cong!\n");
                break;

            case 4: 
                if (n == 0) {
                    printf("Danh sach rong!\n");
                    break;
                }
                printf("Nhap gia tri can tim: ");
                scanf("%d", &value);
                found = 0;
                for (int i = 0; i < n; i++) {
                    if (arr[i] == value) {
                        printf("Tim thay %d tai vi tri: %d\n", value, i);
                        found = 1;
                    }
                }
                if (!found) {
                    printf("Khong tim thay %d trong mang.\n", value);
                }
                break;

            case 5:
                if (n == 0) {
                    printf("Danh sach rong!\n");
                    break;
                }
                printf("Danh sach hien tai: ");
                for (int i = 0; i < n; i++) {
                    printf("%d", arr[i]);
                    if (i < n - 1) printf(" ");
                }
                printf("\n");
                break;

            case 6: 
                if (n <= 1) {
                    printf("Mang qua ngan hoac da sap xep!\n");
                    break;
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
                printf("Da sap xep mang tang dan thanh cong!\n");
                break;

            case 7:
                printf("Cam on ban da su dung chuong trinh!\n");
                break;

            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (choice != 7);

    return 0;
}
