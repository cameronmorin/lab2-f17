 #include "types.h"
 #include "stat.h"
 #include "user.h"

 uint fib(uint n) {
   if (n == 0 || n == 1) {
     return n;
   }

   return fib(n - 1) + fib(n - 2);
 } 

 int main(int argc, char const *argv[]) {

    printf(1, "fib(5) = %d\n", fib(5));
    printf(1, "fib(10) = %d\n", fib(10));
    printf(1, "fib(15) = %d\n", fib(15));
    printf(1, "fib(20) = %d\n", fib(20));
    printf(1, "fib(25) = %d\n", fib(25));
    printf(1, "fib(30) = %d\n", fib(30));
    printf(1, "fib(35) = %d\n", fib(35));
    printf(1, "fib(40) = %d\n", fib(40));
    printf(1, "fib(45) = %d\n", fib(45));


   exit();
   return 0;
 }
