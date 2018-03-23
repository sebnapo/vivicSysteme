#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

int main(int argc, char *argv[])

{
	int filedesc = open("test.txt", O_WRONLY | O_APPEND);
	int filedesc2 = open("test.txt", O_WRONLY | O_APPEND);
	printf("%d\n",filedesc);
	printf("%d\n",filedesc2);
	if(filedesc != filedesc2){
		printf("Les deux nombres sont différents");
	} else {
		printf("Les deux nombres sont les mêmes");
	}
    return 0;
}
