#include <stdio.h>

int main() {
    int n;

    do {
        printf("Nhap mot so nguyen duong tu 1 den 10: ");
        scanf("%d", &n);

        if (n < 1 || n > 10) {
            printf("Vui lòng nhap so trong khoang tu 1 den 10!\n");
        }
    } while (n < 1 || n > 10);
        printf("\nBang cuu chuong cua %d:\n", n);
 
for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}

