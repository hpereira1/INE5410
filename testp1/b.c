#include <stdio.h>
#include <unistd.h>

int main(void) {
  for (int i = 0; i <= 2 && fork(); ++i ) {
    printf("%d e %d\n", getpid(),i);
  }
  return 0;
}