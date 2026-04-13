/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2024/2025
 *   Modul               : 1
 *   Hari dan Tanggal    : Senin, 13 April 2026
 *   Nama (NIM)          : Nadine Gabe Ulina Sianturi (13224005)
 *   Nama File           : soal1.c
 *   Deskripsi           : Membuat sistem gerbang keamanan yang memproses data satu peneliti dan menentukan status akhir peneliti berdasarkan 
level izin, suhu tubuh, kadar radiasi, dan jam kedatangan.
 * 
 */


 #include <stdio.h>
 #include <string.h>
  
 int izin;
 int suhu;
 int radiasi ;
 int jam ;



 int main() {
   scanf("%d %d %d %d", &izin, &suhu, &radiasi, &jam);
   if (radiasi >= 6 ){
    printf("TOLAK");
   }
   else if (suhu >= 390){
    printf("KARANTINA");
   }
        
   else if (izin == 1 && jam <6 ) {
   printf("TOLAK");
}
   
   else if (izin ==1 && jam >20) {
   printf("TOLAK") ;
}

   else if (izin == 1) {
   printf("MASUK");
}

   else if (izin == 2 && radiasi <=2 && jam >8 && jam <18){
   printf("MASUK");
}

   else if (izin ==2 ){
   printf("PEMERIKSAAN");
}

   else if (izin == 3 && radiasi == 0 && suhu<380){
   printf("MASUK");
}

   else {
   printf("TOLAK");
   }
return 0;
 }
 
