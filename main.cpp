#include <iostream>
#include <gmp.h>
#include <gmpxx.h>

#pragma comment(lib, "libgmpxx.a")
#pragma comment(lib, "libgmp.a")

#pragma comment(lib, "libgcc.a")
#pragma comment(lib, "libmingwex.a")
#pragma comment(lib, "libmsvcrt.a")

int main(int argc, char **argv) {
  mpz_class z = 1000000;
  std::cout << "value" << z << std::endl;
  return 0;
}
