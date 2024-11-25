#include <stdio.h>

int main() {
    int n;

    // Y�u c?u ngu?i d�ng nh?p v�o m?t s? nguy�n duong t? 1 d?n 10
    printf("Nh?p v�o m?t s? nguy�n duong t? 1 d?n 10: ");
    scanf("%d", &n);

    // Ki?m tra n?u s? d� nh?p n?m trong kho?ng t? 1 d?n 10
    if (n >= 1 && n <= 10) {
        // In ra b?ng c?u chuong tuong ?ng v?i s? d� nh?p
        printf("B?ng c?u chuong c?a %d:\n", n);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    } else {
        printf("Vui l�ng nh?p m?t s? nguy�n duong t? 1 d?n 10.\n");
    }

    return 0;
}

