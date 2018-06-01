#include "types.h"
#include "stat.h"
#include "user.h"
#include <iostream>
using namespace std;

int recursive(int n)
{
  cout << "In recursive function" << endl;
  if (n == 0)
    return 0;
  return recursive(n);
}

int main(int argc, char *argv[])
{
   int pid=0;
   pid=fork();
   if(pid==0){
       recursive(1);
       exit();
   }
   wait();
   exit();
}
