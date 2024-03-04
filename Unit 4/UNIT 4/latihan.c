#include <stdio.h>

int sisi,keliling,luas,vol;

void hitungkeliling(int sisi) {
    keliling = sisi*4;
    printf ("Keliling persegi = %d \n", keliling);
}
void hitungluas(int sisi) {
    luas = sisi*sisi;
    printf ("Luas persegi = %d \n", luas);
}
void hitungvol(int sisi) {
    vol = sisi*sisi*sisi;
    printf ("Volume kubus = %d\n", vol );
}

int main () {
    printf ("Masukkan nilai sisi= ");
    scanf ("%d", &sisi);

    hitungkeliling(sisi);
    hitungluas(sisi);
    hitungvol(sisi);

    return 0;
}