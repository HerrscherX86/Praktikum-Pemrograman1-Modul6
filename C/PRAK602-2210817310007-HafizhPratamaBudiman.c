#include <stdio.h>

int main() {

    int baris,n,isi;
    scanf("%d", &baris);
    int angka[baris];
    for (n=0;n<baris;n++) {
        scanf("%d", &isi);
        angka[n]=isi;
    }
    for (n=0;n<baris;n++) {
        printf("%d ", angka[n] * (n+1));
    }
}    