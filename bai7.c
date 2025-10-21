#include <stdio.h>

long long tinhGiaiThua(int n) {
    if (n < 0) return -1; // Khong tinh giai thua cua so am
    long long ketQua = 1;
    for (int i = 1; i <= n; i++) {
        ketQua *= i;
    }
    return ketQua;
}

int main() {
    int n;
    printf("Nhap n (>= 0): ");
    scanf("%d", &n);
    long long ketQua = tinhGiaiThua(n);
    if (ketQua == -1)
        printf("Khong tinh duoc giai thua cua so am!\n");
    else
        printf("%d! = %lld\n", n, ketQua);
    return 0;
}
