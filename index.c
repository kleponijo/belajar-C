#include <stdio.h>
#include "page/home.h"
#include "auth/login.h"

int main(){
  int pilihan;
  printf("pilih 1: login");
  printf("pilih 2: home");
  scanf("%d", &pilihan);

  switch(pilihan) {
    case 1:
    loginPage();
    break;
    case 2:
    homePage();
    break;
    default:
    printf("sudah tidak ada pilihan \n");
  }
  return 0;
}