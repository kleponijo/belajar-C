#include <stdio.h>
#include <string.h>

int main(){
  int x, a, hasil; // untuk int (integer) itu menggunakan %d
  char y, b; // untuk char (character) itu menggunakan %c
  float z; //

  // untuk int
  // printf("masukan nilai x : ");
  // scanf("%d", &x);
  // printf("nilai yang baru anda masukan adalah x = %d", x);

  // untuk char
  // printf("masukan ke karakter y maksimal 1 char : ");
  // scanf("%c", &y);
  // printf("nilai yang baru anda masukan adalah x = %c", y);

  // untuk float
  // printf("masukan ke nilai ke z : ");
  // scanf("%f", &z);
  // printf("nilai yang baru anda masukan adalah x = %f \n", z);
  // printf("nilai yang baru anda masukan adalah x = %.1f", z);

  // printf("masukan nilai yang akan dijumlahkan : ");
  // scanf("%d", &x);
  // printf("masukan nilai selanjutnya : ");
  // scanf("%d", &a);
  // hasil = x + a;
  // printf("%d + %d = %d", x, a, hasil);

  // untuk karakter
  printf("masukan karakter_1 : ");
  scanf("%c", &y);
  printf("masukan karakter_2 : ");
  scanf(" %c", &b); // harus kasih spasi " %c" seperti itu
  printf("karakter_ 1 adalah %c\ndan \nkarakter_2 adalah %c", y, b);

  return 0;
}
