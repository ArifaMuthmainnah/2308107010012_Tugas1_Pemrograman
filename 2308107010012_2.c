#include <stdio.h>

int main() {

    //Deklarasi variabel untuk menyimpan informasi pengguna
    int tahun;

    //Input tahun dari pengguna
    printf("Masukkan Tahun (XXXX): ");

    while (1){
        //ketentuan tahun yang boleh dimasukkan oleh pengguna
        if (scanf("%d", &tahun) != 1) {
            printf("TAHUN YANG ANDA MASUKKAN TIDAK VALID. SILAHKAN MASUKKAN KEMBALI! \n");
            while (getchar() != '\n');

            continue;
        }

        if (tahun < 1000 ||  tahun > 9999) {
            printf("TAHUN YANG ANDA MASUKKAN TIDAK MEMILIKI EMPAT DIGIT. SILAHKAN MASUKKAN KEMBALI! \n");

            continue;
        }

        break;
    }

    //Periksa apakah tahun yang diinput merupakan tahun kabisat
    
    if ((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0) {
        printf("%d ADALAH TAHUN KABISAT \n", tahun);
    } 
    
    else {
        printf("%d BUKAN TAHUN KABISAT \n", tahun);
    }                

    return 0;

}