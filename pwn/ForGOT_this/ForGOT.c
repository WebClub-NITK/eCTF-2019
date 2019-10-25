#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void get_flag()
{
	printf("There you go!\n");
	fflush(stdout);

	system("/bin/cat flag.txt");
}

void echo()
{
	printf("\nEnter a string: ");
	fflush(stdout);

	char buffer[500];
	read(0, buffer, 500);
	printf(buffer);
}


int main(int argc, char **argv)
{
	printf("Welcome to the echo program: ");
	fflush(stdout);

	echo();
	printf("Thank you for using the program");
	printf("\n");
	fflush(stdout);

	return 0;
}	


