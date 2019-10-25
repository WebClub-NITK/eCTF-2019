#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

unsigned int data;

void func()
{
	unsigned char buffer[500];
	read(0, buffer, 500);
	fflush(stdin);

	printf(buffer);
	fflush(stdout);

	if(data == 0xbaadb015)
	{	
		printf("There you go!\n");
		fflush(stdout);

        	system("/bin/cat flag.txt");
	}
	else
	{
		printf("You lose :P\n");
		fflush(stdout);
	}

	return ;
}


int main(int argc, char **argv)
{	
	printf("Welcome to data_write!\n");
	fflush(stdout);

	func();
	return 0;
}
