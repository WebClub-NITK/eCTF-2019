#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void get_shell(unsigned int key1, unsigned long int key2)
{
	/* Basic check */
	if(key1 == 0xfaceb00c && key2 == 0xc15c0d06f00dbaad)
	{
		printf("There you go!\n");
		fflush(stdout);

        	system("/bin/cat flag.txt");
	}
	else
	{
		printf("Y0u 1053 :P\n");
		fflush(stdout);
	}

	return;
}

void func()
{
	char buffer[100];
	gets(buffer);
	puts(buffer);
}

int main(int argc, char **argv)
{
	printf("Welcome to can_you_fake_it!\n");
	fflush(stdout);

	func();
	return 0;
}
