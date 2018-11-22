#include <stdio.h>
#include <stdlib.h>
#include "filesys.h"


void main(int argc, char const *argv[]) {
  // CGS D
  printf("virtualdiskD3_D1: \n");
  format();
  writedisk("virtualdiskD3_D1");

  // CGS C
  printf("virtualdiskC3_C1: \n");
  MyFILE * zfile = myfopen("testfile.txt", "w");

  char *al = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

  int k = 0;
  for (int i = 0; i < (4*BLOCKSIZE); i++) {
    if (k == 26)
      k = 0;
    myfputc(al[k], zfile);
    k++;
  }

  myfclose(zfile);

  // Testing the written file using myfgetc()
  FILE * txt = fopen("testfileC3_C1_copy.txt", "w");
  MyFILE * file = myfopen("testfile.txt", "r");
  char c;
  while (c != EOF) {
    c = myfgetc(file);
    if (c != EOF) {
      fprintf(txt, "%c", c);
      printf("%c", c);
    } else printf("\n");
  }
  myfclose(file);
  fclose(txt);

  writedisk("virtualdiskC3_C1");


}
