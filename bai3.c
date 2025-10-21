#include <stdio.h>
#include <math.h>

void giaiPhuongTrinhBacHai(float a, float b, float c) {
    if (a == 0) {
        if (b == 0)
            printf("Phuong trinh vo nghiem\n");
        else
            printf("Nghiem x = %.2f\n", -c / b);
    } else {
        float delta = b*b - 4*a*c;
        if (delta < 0)
            printf("Phuong trinh vo nghiem\n");
        else if (delta == 0)
            printf("Nghiem kep x = %.2f\n", -b / (2*a));
        else {
            float x1 = (-b + sqrt(delta)) / (2*a);
            float x2 = (-b - sqrt(delta)) / (2*a);
            printf("Nghiem x1 = %.2f, x2 = %.2f\n", x1, x2);
        }
    }
}

int main() {
    float a, b, c;
    printf("Nhap he so a, b, c: ");
    scanf("%f %f %f", &a, &b, &c);
    giaiPhuongTrinhBacHai(a, b, c);
    return 0;
}
