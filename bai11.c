#include <stdio.h>

void inTamGiacSao(int soDong) {
    for (int i = 1; i <= soDong; i++) {
        for (int j = 1; j <= soDong - i; j++) 
            printf(" ");
        for (int j = 1; j <= 2 * i - 1; j++) 
            printf("*");
        printf("\n");
    }
}

int main() {
    int soDong = 4;
    inTamGiacSao(soDong);
    return 0;
}
