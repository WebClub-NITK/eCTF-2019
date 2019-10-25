#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct no_reorder
{
	char buffer[100];
	void (*executeme)(unsigned int x);
	unsigned int x;
} hack_struct;

void get_flag(unsigned int key1)
{
	if(key1 == 0xc00010ff)
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
	hack_struct s;

	gets(s.buffer);
	fflush(stdin);

	s.executeme(s.x);

	return;
}


int main(int argc, char **argv)
{
	printf("Welcome to bof2!\n");
	fflush(stdout);

	func();
	return 0;
}
