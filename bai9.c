#include <stdio.h>

void nhapDaySo(int n) {
    int so, viTriHienTai = 1;
    while (viTriHienTai <= n) {
        printf("Nhap so thu %d: ", viTriHienTai);
        scanf("%d", &so);
        if (so == viTriHienTai)
            viTriHienTai++;
        else {
            printf("Sai! Nhap lai tu dau.\n");
            viTriHienTai = 1;
        }
    }
    printf("Hoan thanh!\n");
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    nhapDaySo(n);
    return 0;
}
