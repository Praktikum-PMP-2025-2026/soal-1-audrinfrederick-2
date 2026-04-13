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
  
 int main(void) {
  int izin;
  float suhu;
  unsigned int radiasi;
  unsigned int jam;

  printf("Masukkan izin, suhu, radiasi, dan jam (misal: 1 36.5 2 10): ");
  scanf("%d %f %u %u", &izin, &suhu, &radiasi, &jam);


    int jam_ditolak = (jam < 6 || jam > 20);   // jam di luar 6-20 ditolak untuk izin 1
    int jam_diterima = (jam >= 6 && jam <= 18); // jam 6-18 diterima untuk izin >=2

    if (radiasi >= 6) {
        printf("TOLAK");
    } else if (suhu >= 390) {
        printf("KARANTINA");
    } else if (izin == 1 && jam_ditolak) {
        // Izin 1 hanya boleh masuk antara jam 6 sampai 20 (inklusif)
        printf("TOLAK");
    } else if (izin == 1) {
        printf("MASUK");
    } else if (izin >= 2 && radiasi <= 2 && jam_diterima) {
        // Izin >=2, radiasi rendah, dan jam 6-18 boleh masuk
        printf("MASUK"); 
        } else if (izin == 2 ) {
            printf("PEMERIKSAAN");
        } else {
            printf("TOLAK");
        }
        return 0;
    }


/** RE FERENSI
 * https://www.geeksforgeeks.org/c/data-types-in-c/
 */