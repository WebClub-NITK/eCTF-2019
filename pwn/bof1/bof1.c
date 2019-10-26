#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void get_flag()
{
	
	printf("There you go!\n");
	fflush(stdout);

	system("/bin/cat flag.txt");
}


void func()
{
	char buffer[100];
	gets(buffer);
	fflush(stdin);

	puts(buffer);
	fflush(stdout);
}


int main(int argc, char **argv)
{	
	printf("Welcome to bof1!\n");
	fflush(stdout);

	func();
	return 0;
}
