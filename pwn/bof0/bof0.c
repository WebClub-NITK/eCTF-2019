#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void func()
{
	char buffer[100];
	unsigned short x1;
	unsigned int x2;
	unsigned long int x3;

	gets(buffer);
	fflush(stdin);
	if(x1 == 0xdead && x2 == 0xfaceb00c && x3 == 0xfeedfacecafebeef)
	{	
		printf("There you go!\n");
		fflush(stdout);
		system("/bin/cat flag.txt");
		exit(-1);
	}

	printf("Nah, you are not getting it\n");
	fflush(stdout);
}


int main(int argc, char **argv)
{	
	printf("Welcome to bof0!\n");
	fflush(stdout);
	func();

	return 0;
}
