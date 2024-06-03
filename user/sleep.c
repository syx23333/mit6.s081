#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void main(int argc, char *argv[])
{
  if(argc != 2){
    // 2 输出到哪里，输出内容，
    fprintf(2,"usage:sleep <time> \n");
    exit(1);
  }
  int sec = atoi(argv[1]);
  sleep(sec);  
  //printf("usage:sleep %d \n",sec);
  exit(0);
}