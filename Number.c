#include <stdio.h>
int main() {
int num ;
printf("Enter any number: ");
    scanf("%d", &num);
  switch (num) {
  case 0:
    printf("0\n");
    break;
  case 1:
    printf("1\n");
    break;
  default:
    printf("Not in range\n");}}
