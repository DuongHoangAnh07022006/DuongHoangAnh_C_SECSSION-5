#include <stdio.h>

int main() {
    int n;

    // Yêu c?u ngu?i dùng nh?p vào m?t s? nguyên duong t? 1 d?n 10
    printf("Nh?p vào m?t s? nguyên duong t? 1 d?n 10: ");
    scanf("%d", &n);

    // Ki?m tra n?u s? dã nh?p n?m trong kho?ng t? 1 d?n 10
    if (n >= 1 && n <= 10) {
        // In ra b?ng c?u chuong tuong ?ng v?i s? dã nh?p
        printf("B?ng c?u chuong c?a %d:\n", n);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    } else {
        printf("Vui lòng nh?p m?t s? nguyên duong t? 1 d?n 10.\n");
    }

    return 0;
}

