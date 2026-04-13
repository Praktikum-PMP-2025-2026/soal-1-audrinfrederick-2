
/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1
 *   Hari dan Tanggal    : 4/13/2025
 *   Nama (NIM)          : 13224044
 *   Nama File           : gerbang.c
 *   Deskripsi           : membuat sistem gerbang yang menerima input izin, suhu, radiasi, dan 
 *                         jam untuk menentukan apakah seseorang dapat masuk, ditolak, atau diperiksa
 *                         sesuai dengan ketentuan yang berlaku.
 */

 #include <stdio.h>
 #include <string.h>
  
 int main() {
  int izin, i;
  float suhu;
  unsigned int radiasi;
  unsigned int jam;

//   printf("Masukkan izin suhu radiasi jam:");
  scanf("%d %f %u %u", &izin, &suhu, &radiasi, &jam);

    if (radiasi >=6) {
        printf("TOLAK");
    } else if (suhu >= 390) {
        printf("KARANTINA");
    } else if (izin ==1 && (jam<6 || jam>20)) {
        printf("TOLAK");
    } else if (izin ==1) {
        printf("MASUK");
    } else if (izin == 2 && radiasi <= 2 && (jam >= 8 && jam <= 18)) {
        printf("MASUK"); 
    } else if (izin == 2 ) {
        printf("PEMERIKSAAN");
    } else if (izin == 3 && radiasi == 0 && suhu <380) {
        printf("MASUK");
    } else {
        printf("TOLAK");
    }
     return 0;
    }

/** RE FERENSI
 * https://www.geeksforgeeks.org/c/data-types-in-c/
 */
