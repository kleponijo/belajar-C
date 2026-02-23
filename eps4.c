#include <stdio.h>
#include <string.h>

int main(){
  int x; // untuk int (integer) itu menggunakan %d
  char y; // untuk char (character) itu menggunakan %c
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
  printf("masukan ke nilai ke z : ");
  scanf("%f", &z);
  printf("nilai yang baru anda masukan adalah x = %f \n", z);
  printf("nilai yang baru anda masukan adalah x = %.1f", z);

  return 0;
}
