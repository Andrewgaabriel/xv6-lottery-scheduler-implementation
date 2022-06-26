#include "param.h"
#include "types.h"
#include "stat.h"
#include "user.h"
#include "syscall.h"
#include "rand.h"


/* Main com definição de bilhetes e processamento de ~3s*/
/* int main() {

    int N = 3;
    int pid;
    int bilhetes[3] = {300, 1000, 30};

    for (int i = 0; i < N; i++) {
        pid = fork(bilhetes[i]);
        if (pid == 0) {
            for (int c = 0; c < 1742000; c++){
                for (int d = 0; d < 1739000; d++){
                    c = d * 1234.56 + c % 12346;
                }
            }
            printf(1, "P:%d B:%d\n",getpid(), bilhetes[i]);
            exit();
        }
    }

    for (int i = 0; i < 10; i++) {
        wait();
    }
    exit();
} */



/* Main com definição de bilhetes e processamento infinito
 testa usando CTRL + P*/
/* int main() {

    int N = 3;
    int pid;
    int bilhetes[3] = {300, 1000, 30};

    for (int i = 0; i < N; i++) {
        pid = fork(bilhetes[i]);
        if (pid == 0) {
            for (;;);
            exit();
        }
    }

    for (int i = 0; i < 10; i++) {
        wait();
    }
    exit();
} */




/* Main sem definição de bilhetes e processamento de ~3s*/
/* int main() {

    int pid;

    for (int i = 1; i < 10; i++) {
        pid = fork(10+i*40);
        if (pid == 0) {


            for (int c = 0; c < 1742000; c++){
                for (int d = 0; d < 1739000; d++){
                    c = d * 1234.56 + c % 12346;
                }
            }
            for(;;);

            printf(1, "P:%d B:%d\n",getpid(), 10+i*40);
            exit();
        }
    }

    for (int i = 0; i < 10; i++) {
        wait();
    }
    exit();
} */



/* Main sem definição de bilhetes e processamento infinito
testa usando CTRL + P */
int main() {

    int pid;

    for (int i = 1; i < 10; i++) {
        pid = fork(10+i*40);
        if (pid == 0) {

            for(;;);
            exit();
        }
    }

    for (int i = 0; i < 10; i++) {
        wait();
    }
    exit();
}
