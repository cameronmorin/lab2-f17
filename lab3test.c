#include "types.h"
#include "stat.h"
#include "user.h"

uint fib(uint n) {
  if (n == 0 || n == 1) {
    return n;
  }

  return fib(n - 1) + fib(n - 2);
} 

int returnzero(int n) {
  // int data[10000];
  // data[0] = 0;
  if (n == 0) {
    return 0;
  }

  printf(1, "%d\n", n);
  return returnzero(--n);
}

int main(int argc, char const *argv[]) {
  printf(1, "fib(10) = %d\n", fib(10));
  printf(1, "fib(20) = %d\n", fib(20));
  printf(1, "fib(30) = %d\n", fib(30));
  printf(1, "fib(40) = %d\n", fib(40));
  printf(1, "fib(50) = %d\n", fib(40));
  printf(1, "fib(60) = %d\n", fib(40));
  printf(1, "fib(90) = %d\n", fib(90));

  exit();
  return 0;
}
