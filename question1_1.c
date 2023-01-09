#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
    int pid1, pid2, status;

    if ((pid1 = fork()) == 0)
    {
        printf("child1 \n");
    }
    else if ((pid2 = fork()) == 0)
    {
        printf("child2 \n");
    }
    else
    {
        printf("parent id = %d\n", getpid());
        printf("pid1 =  %d\n", pid1);
        printf("pid2 = %d\n", pid2);
        printf("pid = %d\n", wait(&status));
        printf("pid = %d\n", wait(&status));
    }
}