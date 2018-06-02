#include "types.h"
#include "stat.h"
#include "user.h"

int recursive(int n)
{
  if (n == 0)
    return 0;
  return recursive(n - 1) + recursive(n - 1) + 1;
}

int main(int argc, char *argv[])
{
   int pid=0;
   pid=fork();
   if(pid==0){
       recursive(500);
       exit();
   }
   wait();
   exit();
}
