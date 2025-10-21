#include <stdio.h>

void inFibonacci(int n) {
    int a = 0, b = 1, c;
    printf("%d %d ", a, b);
    c = a + b;
    while (c < n) {
        printf("%d ", c);
        a = b;
        b = c;
        c = a + b;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    inFibonacci(n);
    return 0;
}
