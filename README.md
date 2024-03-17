1. 2308107010012_1.c

   Program ini bertujuan agar pengguna mampu dalam mengkonversi berbagai jenis bilangan, yaitu dari desimal ke biner, biner ke desimal, desimal ke oktal, dan dari oktal ke desimal. Penjelasan program:
   
   - Variabel yang digunakan adalah 'pilihan'. Variabel ini digunakan untuk menyimpan pilihan operasi konversi yang dimasukkan oleh pengguna. Variabel lain yang digunakan adalah 'decimal', 'biner', dan 'octal' dengan fungsi sebagai tempat menyimpan nilai bilangan desimal, biner, dan oktal yang dimasukkan oleh pengguna. 

   - Tipe data yang digunakan pada variabel 'pilihan' adalah 'int' dengan format specifier '%d', sedangkan tipe data yang digunakan pada variabel 'decimal', 'biner', dan 'oktal' adalah 'long int' dengan format specifier '%ld'. 

   - 'printf' digunakan untuk menampilkan pilihan operasi konversi yang dapat dilakukan oleh pengguna, serta untuk menampilkan pilihan yang harus dimasukkan pengguna, yaitu angka dari 1 hingga 4.

   - Program ini menggunakan konsep 'switch-case' agar pengguna dapat memilih jenis konversi yang diinginkan, sehingga program dapat menjalankan kode yang sesuai dengan pilihan pengguna.

   - 'printf' pada case 1 digunakan untuk menampilkan pernyataan yang meminta pengguna memasukkan bilangan desimal.
   
   - 'printf("biner: ")' digunakan untuk menampilkan bilangan biner yang dihasilkan setelah bilangan dikonversi nantinya.

   - case 1 pada program ini menggunakan perulangan 'for' untuk membantu dalam melakukan iterasi bit, mengkonvesi digit, dan menampilkan hasil secara sistematis dan efisien.

   - 'int i = 15' mendefinisikan variabel 'i' dan memberinya nilai awal 15. Hal ini berarti iterasi akan dimulai dari bit paling signifikan (paling kiri) dari bilangan biner, karena konversi bilangan yang diinginkan adalah dari bilangan desimal menjadi bilangan biner dengan panjang 16 bit (dari 15 hingga 0).

   - 'i >= 0' menunjukkan bahwa iterasi akan terus dilakukan selama nilai 'i' masih lebih besar atau sama dengan 0. Kondisi ini memastikan bahwa iterasi akan berhentu ketikan semua 16 bit bilangan desimal telah dikonversi menjadi bilangan biner. 

   - 'i--' menyatakan bahwa setelah setiap iterasi, nilai 'i' akan dikurangi satu. Hal ini memastikan bahwa dalam konversi bilangan desimal menjadi bilangan biner akan dilanjutkan ke bit berikutnya.

   - '(decimal >> 1)' merupakan operasi (bitwise shift ke kanan) yang menggeser bilangan desimal ke kanan sebanyak 'i' bit. Pada case 1 program ini, operasi tersebut menggeser digit yang sedang diproses (dari kiri ke kanan) ke posisi paling kanan. Misalnya, jika 'i' adallah 0, maka digit paling kiri yang sedang diproses akan berada di posisi paling kanan dari bilangan biner. 

   - '& 1' merupakan operasi (bitwise AND) yang digunakan untuk mendapatkan nilai bit terakhir (bit terkecil) setelah dilakukan operasi bitwise shift ke kanan. Hal ini dapat terjadi karena operasi bitwise AND dengan 1 pada bit terakhir akan selalu menghasilkan nilai bit itu sendiri.

   - 'printf("%d", (decimal >> i) & 1)' digunakan untuk mencetak nilai bit terakhir dari digit yang sedang diproses dalam konversi bilangan desimal menjadi bilangan biner.

   - 'break' digunakan untuk menghentikan eksekusi dari case tersebut dan keluar dari blok 'switch-case', agar eksekusi ke case-case lainnya tidak dilakukan.

   - 'printf' pada case 2 digunakan untuk menampilkan pernyataan yang meminta pengguna memasukkan bilangan biner.

   - 'long int decimal = 0, i = 0, sisa_bagi;' menyatakan deklarasi variabel yang menggunakan tipe data long int dengan format specifier '%ld'. Variabel 'decimal = 0' digunakan untuk menyimpan hasil konversi bilangan tersebut, 'i = 0' digunakan sebagai penghitung iterasi dalam loop yang digunakan, dan 'sisa_bagi' digunakan untuk menyimpan sisa pembagian saat mengkonversi setiap digitnya.

   - case 2 pada program ini menggunakan perulangan 'while' untuk membantu dalam mengkonversi setiap digit biner menjadi bilangan desimal secara sistematis, terlepas dari panjang bilangan biner yang diberikan oleh pengguna.

   - 'while (biner != 0)' menyatakan bahwa selama nilai variabel 'biner' tidak sama dengan 0, loop akan terus dieksekusi. Maknanya, proses konversi akan berlangsung selama masih ada digit yang tersisa dalam bilangan biner yang akan dikonversi.

   - 'sisa_bagi = biner % 10' menyatakan bahwa nilai 'sisa_bagi' didapatkan dari hasil operasi modulus bilangan biner dengan 10. Operasi ini digunakan untuk mendapatkan digit paling kanan dari bilangan biner.

   - 'biner /= 10' merupakan operasi pembagian bilangan biner dengan 10. Operasi ini menggeser semua digit biner satu posisi ke kanan, sehingga digit paling kanan dihapus dari bilangan biner.

   - 'decimal += sisa_bagi << i;' merupakan operasi yang melakukan shift ke kiri sebanyak 'i' kali pada nilai 'sisa_bagi' (digit biner yang sudah dikonversi menjadi digit desimal), kemudian hasilnya ditambahkan ke nilai variabel 'desimal'.

   - 'i++' digunakan sebagai penghitung untuk menentukan bobot digit dalam bilangan desimal. Notasi ini menunjukkan bahwa pada setiap iterasi, nilai 'i' akan bertambah satu.

   - 'printf("Desimal: %ld", decimal);' digunakan untuk mencetak hasil konversi dari bilangan biner ke bilangan desimal, dengan tipe data 'long int'.

   - 'break' digunakan untuk menghentikan eksekusi dari case tersebut dan keluar dari blok 'switch-case', agar eksekusi ke case-case lainnya tidak dilakukan.

   - 'printf' pada case 3 digunakan untuk menampilkan pernyataan yang meminta pengguna memasukkan bilangan desimal.

   - 'printf("Octal: %o", decimal);' digunakan untuk mencetak hasil konversi dari bilangan desimal ke bilangan oktal. '%o' digunakan karena format specifier tersebut secara khusus digunakan untuk mencetak nilai dalam basis oktal.

   - 'break' digunakan untuk menghentikan eksekusi dari case tersebut dan keluar dari blok 'switch-case', agar eksekusi ke case-case lainnya tidak dilakukan.

   - 'long int decimal = 0, digit, pangkatOctal = 1;' menyatakan deklarasi variabel yang menggunakan tipe data long int dengan format specifier '%ld'. Variabel 'decimal = 0' digunakan untuk menyimpan hasil konversi bilangan tersebut, 'digit' digunakan untuk menyimpan nilai setiap digit dari bilangan oktal saat dilakukan iterasi dalam proses konversi, dan 'pangkatOctal = 1' digunakan untuk menghitung pangkat dari 8 yang digunakan dalam konversi.

   - 'printf' pada case 4 digunakan untuk menampilkan pernyataan yang meminta pengguna memasukkan bilangan oktal.

   - case 4 pada program ini menggunakan perulangan 'while' untuk membantu dalam mengonversi setiap digit oktal menjadi digit desimal secara sistematis, terlepas dari panjang bilangan oktal yang diberikan oleh pengguna.

   - 'while (octal != 0)' menyatakan bahwa selama nilai variabel 'oktal' tidak sama dengan 0, loop akan terus dieksekusi. Maknanya, proses konversi akan berlangsung selama masih ada digit yang tersisa dalam bilangan oktal yang akan dikonversi.

   - 'digit = octal % 8;' menyatakan bahwa nilai 'digit' didapatkan dari hasil operasi modulus bilangan oktal dengan 8. Hal ini dilakukan karena basis oktal adalah 8 (digit oktal berkisar dari 0 hingga 7). Operasi ini digunakan untuk mendapatkan digit paling kanan dari bilangan oktal. 

   - 'decimal += ((digit) * (pangkatOctal));' merupakan operasi yang mengalikan nilai 'digit' (digit oktal yang telah dikonversikan menjadi digit desimal) dengan 'pangkatOctal', kemudian hasilnya ditambahkan ke nilai variabel 'decimal'.

   - 'pangkatOctal = pangkatOctal * 8;' merupakan operasi yang mengalikan nilai 'pangkatOctal' dengan 8. Hal ini dilakukan agar posisi pangkat dapat digerakkan ke digit oktal berikutnya.

   - 'Octal /= 8' merupakan operasi yang dilakukan dengan membagi bilangan oktal dengan 8. Operasi ini menggeser semua digit oktal satu posisi ke kanan, sehingga digit paling kanan dihapus dari bilangan oktal.

   - 'printf("Desimal: %ld", decimal)' digunakan untuk mencetak hasil konversi dari bilangan oktal ke bilangan desimal. 

   - 'break' digunakan untuk menghentikan eksekusi dari case tersebut dan keluar dari blok 'switch-case', agar eksekusi ke case-case lainnya tidak dilakukan.

   - 'default:' digunakan pada program ini untuk mengatasi kasus ketika pengguna memasukkan nilai selain dari 1-4 saat pernyataan 'pilihan' ditampilkan.

   -  'printf("MASUKKAN PILIHAN YANG SESUAI!")' digunakan untuk menampilkan pesan kesalahan saat pengguna memasukkan pilihan yang tidak valid, sehingga dapat mencegah terjadinya kesalahan dalam eksekusi program.

   - 'return 0' menyatakan bahwa nilai 0 dikembalikan. Notasi ini digunakan untuk memberikan informasi kepada sistem operasi bahwa program telah selesai dengan sukses dan tidak ada masalah yang terjadi selama eksekusi.



3. 2308107010012_2.c

   Program ini bertujuan agar pengguna mampu melakukan pengecekan tahun kabisat secara sederhana dan efisien. Penjelasan program:

   - Variabel yang digunakan adalah 'tahun'. Variabel ini digunakan untuk menyimpan tahun yang akan dimasukkan oleh pengguna.

   - Tipe data yang digunakan pada variabel 'tahun' adalah 'int' dengan format specifier '%d'.

   - 'printf("Masukkan Tahun (XXXX): ")' digunakan untuk menampilkan pernyataan yang meminta pengguna memasukkan tahun dengan format XXXX (empat digit).

   - Program ini menggunakan konsep 'while' untuk memastikan bahwa program hanya menerima input yang sesuai dengan persyaratan yang ditetapkan. Konsep ini memungkinkan pengulangan terus-menerus hingga pengguna memberikan input yang valid. Dengan adanya 'while', program ini akan terus meminta pengguna memasukkan tahun jika tahun yang dimasukkan tidak valid.

   - 'while (1)' digunakan untuk membuat loop berjalan tanpa henti selama kondisi yang diberikan bernilai benar (true).

   - 'if' digunakan untuk memvalidasi input tahun yang dimasukkan oleh pengguna sesuai dengan aturan yang diinginkan program, yaitu dalam bentuk angka.

   - '(scanf("%d", &tahun) != 1)' menyatakan bahwa input dari pengguna yang dibaca oleh 'scanf' adalah bukan 1 (tidak benar). Hal ini menunjukkan bahwa input tersebut bukan angka, melainkan karakter atau string, karena karakter atau string tidak dapat diubah menjadi integer (%d).

   - 'printf("TAHUN YANG ANDA MASUKKAN TIDAK VALID. SILAHKAN MASUKKAN KEMBALI! \n")' digunakan untuk mencetak pesan terjadinya kesalahan dan meminta pengguna memasukkan kembali inputnya jika kondisi 'scanf("%d", &tahun) != 1' terpenuhi.

   - 'while (getchar() != '\n')' digunakan untuk membersihkan input buffer, sehingga input selanjutnya tidak terpengaruh oleh karakter yang masih tersisa di dalam buffer. 

   - 'continue' digunakan untuk melanjutkan iterasi loop saat ini, sehingga program kembali ke awal loop 'while (1)' untuk meminta pengguna memasukkan input kembali.

   - 'if' digunakan untuk memvalidasi input tahun yang dimasukkan oleh pengguna sesuai dengan aturan yang diinginkan program, yaitu memiliki tepat empat digit. 

   - '(tahun < 1000 ||  tahun > 9999)' menyatakan bahwa tahun yang dimasukkan pengguna kurang dari 1000 atau lebih dari 9999. Hal ini menunjukkan bahwa input tahun yang dimasukkan tidak memiliki tepat empat digit. 

   - 'printf("TAHUN YANG ANDA MASUKKAN TIDAK MEMILIKI EMPAT DIGIT. SILAHKAN MASUKKAN KEMBALI! \n")' digunakan untuk mencetak pesan terjadinya kesalahan dan meminta pengguna memasukkan kembali inputnya jika kondisi '(tahun < 1000 ||  tahun > 9999)' terpenuhi.

   - 'continue' digunakan untuk melanjutkan iterasi loop saat ini, sehingga program kembali ke awal loop 'while (1)' untuk meminta pengguna memasukkan input kembali.

   - 'break' digunakan untuk mengakhiri loop 'while (1)' setelah input yang diberikan oleh pengguna valid. Hal ini bertujuan agar program untuk mengecek tahun yang diinput kabisat atau bukan dapat di-eksekusi.

   - Konsep 'if-else' digunakan untuk memastikan bahwa hanya satu dari dua pernyataan tersebut yang akan di-eksekusi. Jika kondisi dalam 'if' terpenuhi, maka pernyataan didalamnya akan di-eksekusi dan pernyataan di dalam 'else' akan dilewati. Sebaliknya, jika kondisi dalam 'else' terpenuhi, maka pernyataan didalamnya akan di-eksekusi dan pernyataan di dalam 'if' akan dilewati.

   - pernyataan di dalam 'if', yaitu '((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0)' merupakan operasi yang menyatakan bahwa 'tahun' habis dibagi oleh 4 dan 'tahun' tidak habis dibagi 100  atau 'tahun' habis dibagi oleh 400.

   - 'printf("%d ADALAH TAHUN KABISAT.\n", tahun)' digunakan untuk mencetak pesan bahwa "Tahun yang diinput adalah tahun kabisat" jika kondisi '((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0)' terpenuhi.

   - pernyataan di dalam 'else', yaitu 'printf("%d BUKAN TAHUN KABISAT \n", tahun)' digunakan untuk mencetak pesan bahwa "Tahun yang diinput bukan tahun kabisat" jika kondisi '((tahun % 4 == 0 && tahun % 100 != 0) || tahun % 400 == 0)' tidak terpenuhi.

    - 'return 0' menyatakan bahwa nilai 0 dikembalikan. Notasi ini digunakan untuk memberikan informasi kepada sistem operasi bahwa program telah selesai dengan sukses dan tidak ada masalah yang terjadi selama eksekusi.
