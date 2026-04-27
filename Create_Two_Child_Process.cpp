#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

    pid_t pid1, pid2;

    pid1 = fork();

    if(pid1 == 0){
        printf("Child 1 Process ID: %d | Parent ID: %d\n", getpid(), getppid());
    }else{
        pid2 = fork();

        if(pid2 == 0){
            printf("Child 2 Process ID: %d } Parent ID: %d\n", getpid(), getppid());
        }else{
            printf("Parent Continues Execution. PID: %d\n", getpid());
        }
        return 0;
    }
}


