#include <stdio.h>

void tinhTienDien(int soDien) {
    float tien;
    if (soDien <= 100)
        tien = soDien * 500;
    else if (soDien <= 350)
        tien = 100 * 500 + (soDien - 100) * 550;
    else
        tien = 100 * 500 + 250 * 550 + (soDien - 350) * 650;

    printf("Tien dien: %.0f VND\n", tien);
}

int main() {
    int soDien;
    printf("Nhap so dien (kWh): ");
    scanf("%d", &soDien);
    tinhTienDien(soDien);
    return 0;
}
