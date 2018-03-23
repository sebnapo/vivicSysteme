#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char *name = "v";
	char *value = "5";
	setenv(name,value,0);
	pid_t pid = getpid();
	pid_t fils = fork();
	if(getpid() == pid) {
		char *var = getenv("v");
		printf("Valeur de v dans le père est %s\n", var);
		value = "pere";
		setenv(name,value,1);
		var = getenv("v");
		printf("Valeur de v dans le père est %s\n", var);
	} else {
		char *var = getenv("v");
		printf("Valeur de v dans le fils est %s\n", var);
		value = "fils";
		setenv(name,value,1);
		var = getenv("v");
		printf("Valeur de v dans le fils est %s\n", var);
	}
    return(0);
}
