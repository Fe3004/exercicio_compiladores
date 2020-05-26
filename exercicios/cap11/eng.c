#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

char *eng(char *buffer, int x) {
  static char *suf = " KMGTPE";
  int i, val;

  for (i = 0; i < 7; i++) {
    val = x / pow(1000, i);
    if (val == 0)
      break;
  }
  return printf(buffer, "%g%c", x/pow(1000,i-1), suf[i-1]);
}
}
