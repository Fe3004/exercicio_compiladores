#include <stdio.h>

int movetower(int height, int frompin, int topin, int usingpin)
{
  if (height > 0) {
    movetower(height - 1, frompin, usingpin, topin);
    printf("move from %d to %d\n", frompin, topin);
    movetower(height - 1, usingpin, topin, frompin);
  }
}

int main(int argc, char *argv[]) {
  
   printf(movetower(argc > 1 ? atoi(argv[1]) : 3, 1, 3, 2));
   return 0;
}
