#include <stdio.h>
int main() {
    int n;
    printf("Nhap mot so nguyên duong tu 1 den 10: ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("So ban nhap không hop le. Vui lòng nhap so tu 1 den 10.\n");
    } else {
        printf("Bang cuu chuong cua %d:\n", n);
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}
