#include <stdio.h>

void inSoNgayTrongThang(int thang) {
    if (thang < 1 || thang > 12) {
        printf("Thang khong hop le!\n");
    } else if (thang == 2) {
        printf("Thang 2: 28 ngay (29 neu la nam nhuan)\n");
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        printf("Thang %d: 30 ngay\n", thang);
    } else {
        printf("Thang %d: 31 ngay\n", thang);
    }
}

int main() {
    int thang;
    printf("Nhap thang (1-12): ");
    scanf("%d", &thang);
    inSoNgayTrongThang(thang);
    return 0;
}
