#include <stdio.h>
#include <stdlib.h>

int a;

int sonamkinhnghiem();

int b;

int sonamconghien();

int choice;

int main() {
    (sonamkinhnghiem == a);
    printf("nhap so nam kinh nghiem cua ban:\n");
    scanf("%d", &a);
    if (a <= 2) {
        printf(" luong ban nhan duoc la 10 trieu\n");
    } else if (a > 2, a <= 5) {
        printf("luong ban nhan duoc la 20 trieu\n");
    } else if (a > 5) {
        printf("luong ban nhan duoc la 30 trieu\n");
    }
    (sonamconghien == b);
    printf("nhap so nam cong hien: \n");
    scanf("%d", &b);
    getchar();
    switch (choice) {
        case 1:
            (b <= 1);
            printf("so tien thuong ban duoc nhan la: %d\n", (10 * 30 / 100));
            break;
        case 2:
            (b > 1, b <= 2);
            printf("so tien thuong ban duoc nhan la: %d\n", (10 * 50 / 100));
            break;
        case 3:
            (b > 2, b <= 5);
            printf("so tien thuong ban duoc nhan la: %d\n", (20 * 100 / 100));
            break;
        case 4:
            (b > 5);
            printf("so tien thuong ban duoc nhan la: %d\n", (30 * 200 / 100));
            break;
    }
    return 0;
}