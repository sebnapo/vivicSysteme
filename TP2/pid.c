#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
	pid_t pid = getpid();
	pid_t pidFils;

	pid_t ppid = getppid();
	pid_t ppidFils;
	fork();
	ppidFils = getppid();
	pidFils = getpid();
	printf("Pid du processur  : %d\n", pidFils);
	printf("Ppid du processur  : %d\n", ppidFils);
    return(0);
}
