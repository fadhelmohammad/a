# a
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main ()
{
   
   
    // deklarasi variabel soal

    int pilih,total;
    int poin = 0;
    int poin1, poin2, poin3, poin4, poin5, poin6, poin7, poin8, poin9, poin10;
    char jawab1, jawab2, jawab3, jawab4, jawab5, jawab6, jawab7, jawab8, jawab9, jawab10;


  //tampilan awal
  printf("\n\n================ !QUIZ BERHADIAH! ===============\n");
  printf("<3 AYO MENJAWAB KUIS---AGAR SEMAKIN PINTAR <3\n\n");

//   welcome();
    printf("1. Kuis\n");
    printf("2. Keluar\n");

    printf("Input Pilihan Anda : ");
    scanf("%d", &pilih);
    getchar();

    if (pilih > 2) {
      printf("\nMaaf, input anda tidak sesuai!\n");
      printf("Pilihan anda : ");
      scanf("%d", &pilih);
      getchar();
    }
    switch (pilih){
      case 1:
     printf("\t\t--- Aturan Main ---\n");
     printf("- Soal yang akan anda jawab ada 10 soal\n");
     printf("- Bobot per soal adalah 10, jika jawaban anda salah maka anda tidak mendapatkan poin dari soal tersebut\n");
     printf("- Jika anda mendapatkan 100 poin, maka anda akan mendapatkan hadiah uang sebesar Rp. 100.000.000 dan mobil\n");
     printf("- Jika anda mendapatkan 81 hingga 99 poin, maka anda mendapatkan hadiah uang sebesar Rp. 75.000.000\n");
     printf("- Jika anda mendapatkan 61 hingga 80 poin, maka anda mendapatkan hadiah uang sebesar Rp. 45.000.000\n");
     printf("- Jika anda mendapatkan 41 hingga 60 poin, maka anda mendapatkan hadiah uang sebesar Rp. 10.000.000\n");
     printf("- Jika anda mendapatkan 21 hingga 40 poin, maka anda mendapatkan hadiah uang sebesar Rp.  2.500.000\n");
     printf("- Jika anda mendapatkan 20 poin ke bawah, maka anda tidak mendapatkan hadiah apapun\n");
     printf("- Pajak hadiah yang anda dapatkan ditanggung masing-masing peserta\n");
     printf("\n\nApakah anda sudah siap untuk memulai?");
     printf("\nTekan Enter jika anda siap untuk mulai...");
     getch();
     
     printf("\n\n\t\tREADY");
     getch();
     printf("\n\n\t\t SET");
     getch();
     printf("\n\n\t\tGO!!!");
     getch();
[15.12, 13/5/2022] Alifan: printf("\nSoal 4.\nBenda yang bentuknya berubah-ubah mengikuti wadah,tetapi\nvolumenya tetap disebut?\n");
     printf("a. Padat\nb. Cair\nc. Gas\nd. Semua benar\n");
     printf("Input jawaban (huruf) : ");
     scanf(" %c",&jawab4);
     if(jawab4 == 'b'){
       printf("Hore! Jawaban Anda Benar! >.<\n");
     } else {
       printf("Ups, Jawaban Anda Kurang Tepat :(\n");
     }
       getch();

    printf("\nSoal 5.\nTelur kupu-kupu menetas menjadi?\n");
    printf("a. Ulat\nb. Kepompong\nc. Berudu\nd. Pupa\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab5);
    if(jawab5 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
       getch();
      
    printf("\nSoal 6.\nHewan yang memiliki metamorfosis sempurna adalah?\n");
    printf("a. Ular\nb. Kuda\nc. Kupu-kupu\nd. Kucing\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab6);
    if(jawab6 == 'c'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
       getch();
      
    printf("\nSoal 7.\nYang termasuk hewan omnivora adalah?\n");
    printf("a. Beruang\nb. Kupu-kupu\nc. Domba\nd. Sapi\n");
    printf("Input jawaban (huruf) : ");
    scanf(" %c",&jawab7);
    if(jawab7 == 'a'){
      printf("Hore! Jawaban Anda Benar! >.<\n");
    } else {
      printf("Ups, Jawaban Anda Kurang Tepat :(\n");
    }
       getch();
       
   
