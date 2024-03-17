#include <stdio.h>

int main() {

    //Deklarasi variabel

    int pilihan;
    long int decimal, biner, octal;
    
    //pilihan operasi konversi untuk pengguna

    printf("Pilih operasi konversi: \n");
    printf("1. Bilangan Desimal ke Biner \n");
    printf("2. Bilangan Biner ke Desimal \n");
    printf("3. Bilangan Desimal ke Octal \n");
    printf("4. Bilangan Octal ke Desimal \n");
    

    //Input pilihan konversi dari pengguna

    printf("Masukkan Pilihan Anda (1-4): ");
    scanf("%d", &pilihan);

    //Konversi bilangan

    switch (pilihan) {

        case 1: {
            printf("Masukkan Bilangan Desimal: ");
            scanf("%ld", &decimal);

            printf("Biner: ");
            for (int i = 15; i >= 0; i--) {
                printf("%d", (decimal >> i) & 1);
            }

            break;

        }

        case 2: {
            printf("Masukkan Bilangan Biner: ");
            scanf("%ld", &biner);

        //gunakan 'sisa_bagi' (sisa bagi) untuk menyimpan digit biner yang sedang diproses dari bil. biner yang diinput pengguna 
            long int decimal = 0, i = 0, sisa_bagi;

            while (biner != 0) {
                sisa_bagi = biner % 10;
                biner /= 10;
                decimal += sisa_bagi << i;
                i++;
            }

            printf("Desimal: %ld", decimal);
            break;
        }

        case 3: {
            printf("Masukkan Bilangan Desimal: ");
            scanf("%ld", &decimal);
            printf("Octal: %o", decimal);

            break;
        }

        case 4: {
            long int decimal = 0, digit, pangkatOctal = 1;

            printf("Masukkan Bilangan Octal: ");
            scanf("%o", &octal);

            while (octal != 0) {
                digit = octal % 8;  // digit oktal diambil

                //konversi digit ke desimal
                decimal += ((digit) * (pangkatOctal));
                pangkatOctal = pangkatOctal * 8; //posisi digit oktal
                octal /= 8;  // digeser ke kanan untuk mendapat digit berikutnya
            }

            printf("Desimal: %ld", decimal);
            break;

        }

        default:
            printf("MASUKKAN PILIHAN YANG SESUAI!");

    }
    
    return 0;
}