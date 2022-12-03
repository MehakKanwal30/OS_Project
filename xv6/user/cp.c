#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

char buf[512];

int
main(int argc, char *argv[])
{
  int fd0, fd1, n;

  if(argc <= 2)
  {
    printf( "Need 2 arguments for this function to work!\n");
    exit(0);
  }


    if((fd0 = open(argv[1], 0)) < 0)
    {
      printf("cp: cannot open %s\n", argv[1]);
      exit(0);
    }
    if((fd1 = open(argv[2], 0)) < 0)
    {
      printf("cp: cannot open %s\n", argv[2]);
      exit(0);
    }
    
    close(fd0);
    close(fd1);

  exit(0);
}
