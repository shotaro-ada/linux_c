#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(){
    printf("プロセスid = %d\n",getpid() );
}