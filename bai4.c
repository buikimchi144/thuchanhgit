#include <stdio.h>

void tinhHocLuc(float van, float toan, float anh) {
    float diemTB = (van*2 + toan*2 + anh) / 5.0;
    printf("Diem trung binh: %.2f\n", diemTB);
    if (diemTB < 3.0)
        printf("Hoc luc: Yeu\n");
    else if (diemTB <= 5.0)
        printf("Hoc luc: Trung binh\n");
    else if (diemTB <= 7.9)
        printf("Hoc luc: Kha\n");
    else
        printf("Hoc luc: Gioi\n");
}

int main() {
    float diemVan, diemToan, diemAnh;
    printf("Nhap diem Van, Toan, Anh: ");
    scanf("%f %f %f", &diemVan, &diemToan, &diemAnh);
    tinhHocLuc(diemVan, diemToan, diemAnh);
    return 0;
}
