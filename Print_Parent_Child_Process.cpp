#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(){

    pid_t pid;
    pid = fork();

    if(pid < 0){
        printf("Process Creation Failed!\n");
    }else if(pid == 0){
        printf("Child Process (6-10): \n");
        for(int i = 6; i < 10; i++){
            printf("%d", i);
        }
    }else{
        printf("Parent Process (1 - 5): ");
        for(int i = 1; i <=5; i++){
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}


