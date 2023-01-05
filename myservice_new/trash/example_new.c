#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int main(){
    char str[50];
    str = syscall(223, "addlog first call");
    printf("Msg from system call: %s\n",str);
    str = syscall (223, "addlog second call");
    return 0;
}