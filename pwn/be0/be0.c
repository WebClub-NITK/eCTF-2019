#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char **argv)
{	
	printf("There you go!\n");

	system("/bin/cat flag.txt");

	return 0;
}
