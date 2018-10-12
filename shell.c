#include <stdio.h>
#include <stdlib.h>
#include "filesys.h"

int main(int argc, char const *argv[]) {
  format();
  writedisk("virtualdiskD3_D1");
  return 0;
}
