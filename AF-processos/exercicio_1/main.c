#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>


//       (pai)      
//         |        
//    +----+----+
//    |         |   
// filho_1   filho_2


// ~~~ printfs  ~~~
// pai (ao criar filho): "Processo pai criou %d\n"
//    pai (ao terminar): "Processo pai finalizado!\n"
//  filhos (ao iniciar): "Processo filho %d criado\n"

// Obs:
// - pai deve esperar pelos filhos antes de terminar!


int main(int argc, char** argv) {
    pid_t pid = fork();
    pid = getpid();
    if (pid > 0) {
        printf("Processo pai criou %d\n",pid);
        if (pid == 0) {
           printf("Processo filho criou %d\n", getpid());
    }
        }
    else  {
        printf("Processo filho criou %d\n", getpid());
    }
    return 0;
}
