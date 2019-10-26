#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

void get_flag()
{
	printf("There you go!");
	fflush(stdout);

	system("/bin/cat flag.txt");

	return;
}



void func1()
{	
	printf("Leak time!\n");
	fflush(stdout);

	char buffer[500];
	
	read(0, buffer, 500);
	fflush(stdin);

	printf(buffer);
	fflush(stdout);
}

void func2()
{	
	printf("Overflow time!\n");
	fflush(stdout);
	
	char buffer[100];
	gets(buffer);
	fflush(stdin);
}


int main(int argc, char **argv)
{	
	printf("Welcome to catch_the_canary!\n");
	fflush(stdout);
	
	func1();
	func2();

	return 0;
}
