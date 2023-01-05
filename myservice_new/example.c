#include <unistd.h>
#include <sys/syscall.h>
#include <stdio.h>

int main(){
    syscall(223);
    return 0;
}
