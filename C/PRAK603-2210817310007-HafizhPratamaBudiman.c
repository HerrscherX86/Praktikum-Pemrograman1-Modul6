#include <stdio.h>

int main() {

    int b1,b2,n,isi,h;
    scanf("%d %d", &b1, &b2);
    int a1[b1],a2[b2];
    if (b1==b2) {
        for (n=0;n<b1;n++) {
            scanf("%d", &isi);
            a1[n]=isi;
        }
        for (n=0;n<b2;n++) {
            scanf("%d", &isi);
            a2[n]=isi;
        }
        for (n=0;n<b1;n++) {
            h=a1[n]*a2[n];
            printf("%d ", h);
        }
    }
    else {
        printf("Jumlah Tidak Sama");
    }
}