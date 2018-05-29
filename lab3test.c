// #include "types.h"
// #include "stat.h"
// #include "user.h"

// uint fib(uint n) {
//   if (n == 0 || n == 1) {
//     return n;
//   }

//   return fib(n - 1) + fib(n - 2);
// } 

// int main(int argc, char const *argv[]) {
//   // printf(1, "fib(10) = %d\n", fib(10));
//   // printf(1, "fib(20) = %d\n", fib(20));
//   // printf(1, "fib(30) = %d\n", fib(30));
//   // printf(1, "fib(40) = %d\n", fib(40));

//   exit();
//   return 0;
// }



#include "types.h"
#include "stat.h"
#include "user.h"

int test(int n)
{ 
   int x = n + 1;
   return x;
}
int main(int argc, char *argv[])
{
   int pid=0;
   pid=fork();
   if(pid==0){
       test(1);
       exit();
   }
   wait();
   exit();
}
