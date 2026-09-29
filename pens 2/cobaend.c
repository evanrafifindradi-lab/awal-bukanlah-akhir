#include <stdio.h>

int main() {
    int jmTiket, jm3, sm3;
    int  hargaTiket = 50000;
    int biaya;

    printf("Masukkan jumlah tiket yang dibeli: ");
    scanf("%d", &jmTiket);

    jm3 = jmTiket / 3;   
    sm3 = jmTiket % 3;  

    biaya = jm3 * (2 * hargaTiket) + sm3 * hargaTiket;

    printf("Jumlah tiket : %d\n", jmTiket);
    printf("jm3 (kelompok 3) : %d\n", jm3);
    printf("sm3 (sisa)       : %d\n", sm3);
    printf("Total biaya yang harus dibayar: Rp %d,\n", biaya);

    return 0;
}