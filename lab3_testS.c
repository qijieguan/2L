#include "types.h"
#include "stat.h"
#include "user.h"

int fib(int n)
{
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[])
{
   int pid=0;
   pid=fork();
   if(pid==0){
       fib(80);
       exit();
   }
   wait();
   exit();
}
