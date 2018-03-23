#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

/*

*/

int main(int argc, char *argv[])
{
	char path[] = "/bin/ls";
	char* arguments[] = { "ls", "-la" , NULL};
	execv(path,arguments);

	char path2[] = "/usr/bin/firefox";
	char* arguments2[] = { "firefox", NULL};
	execv(path2,arguments2);
    return(0);
}
