#include "types.h"
#include "stat.h"
#include "user.h"

int recursive(int n)
{
  if (n == 0)
    return 0;
  return recursive(n);
}

int main(int argc, char *argv[])
{
   int pid=0;
   pid=fork();
   if(pid==0){
       recursive(2147483647);
       exit();
   }
   wait();
   exit();
}
