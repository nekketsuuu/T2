#include <stdio.h>
/* #include <stdlib.h> */
#include "smack.h"

inline int returnOne() {
  return 1;
}

int main(void) {
  int a;

  a = -1;
  a = returnOne();
  __SMACK_assert(a == 1);
  return a;
}

