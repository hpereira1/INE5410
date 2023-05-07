#include <stdio.h>
#include <unistd.h>

int main(void) {
  for (int i = fork(); i <= 1; ++i ) {
    if (!fork()) {break;}
    if (i ==0){
    printf("child\n");
    sleep(3);
  }
  return 0;
}}