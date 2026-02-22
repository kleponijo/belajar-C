#include <stdio.h>

#define JUDUL "Nadif.com"
#define BILANGAN 100

void main(){
  int angka = 10;
  char huruf = 'A';
  float pecahan = 4.57234;

  printf("Konstanta JUDUL adalah %s\n", JUDUL);
  printf("Konstanta BILANGAN adalah %i\n", BILANGAN);

  printf("Variabel angka = %d\n", angka);
  printf("Variabel huruf = %c\n", huruf);
  // .2 untuk menentukan hanya ada 2 angka di belakang koma
  printf("Variabel pecahan = %.2f\n", pecahan);
  
}