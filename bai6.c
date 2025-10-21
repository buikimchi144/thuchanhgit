#include <stdio.h>

void inBangCuuChuong(int n) {
    if (n < 2 || n > 9) {
        printf("So khong hop le!\n");
    } else {
        for (int i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", n, i, n * i);
        }
    }
}

int main() {
    int so;
    printf("Nhap so (2-9): ");
    scanf("%d", &so);
    inBangCuuChuong(so);
    return 0;
}
