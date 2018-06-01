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
       uint fibn = 1;
       cprintf("fib of %d is %d", fibn, fib(fibn));
       exit();
   }
   wait();
   exit();
}
