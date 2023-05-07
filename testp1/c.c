#include <stdio.h>
#include <unistd.h>

int main(void) {
  if (!fork()){
    fork();
    printf("%d\n",getpid());
  }
  return 0;
  }