#include <stdio.h>

int main(){

  float x, y, hasil;
  // penjumlahan
  // printf("ini adalah porgram operasi matematika \n");
  // printf("masukan nilai pertama: ");
  // scanf("%f", &x);
  // printf("masukan nilai kedua: ");
  // scanf("%f", &y);
  // hasil = x + y;
  // printf("\npenjumlahan");
  // printf("\n%.2f + %.2f = %.2f", x, y, hasil);
  // // pengurangan
  // hasil = x - y;
  // printf("\npengurangan");
  // printf("\n%.2f - %.2f = %.2f", x, y, hasil);
  // // perkalian
  // hasil = x * y;
  // printf("\nperkalian");
  // printf("\n%.2f * %.2f = %.2f", x, y, hasil);
  // // pembagian
  // hasil = x / y;
  // printf("\npembagian");
  // printf("\n%.2f / %.2f = %.2f", x, y, hasil);
  // modulus (sisa bagi)
  int a, b, hasil2;
  printf("\nmodulus");
  printf("\nmasukan nilai pertama:");
  scanf("%d", &a);
  printf("masukan nilai kedua:");
  scanf("%d", &b);
  hasil2 = a % b;
  printf("%d modulus %d = %d", a, b, hasil2);

  return 0;
}