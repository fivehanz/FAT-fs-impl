#include <stdio.h>
#include <stdlib.h>
#include "filesys.h"

void main(int argc, char const *argv[]) {
  format();
  writedisk("virtualdiskC3_C1");

  //myfopen("file.txt", "w");
}
