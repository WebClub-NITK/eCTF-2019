#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void get_flag()
{
	system("/bin/cat flag.txt");
}

void write_anywhere()
{
	unsigned long int addr;
	unsigned long int i;
	
	printf("Write an address you want to write into: ");
	fflush(stdout);

	scanf("%lx", &addr);
	fflush(stdin);

	printf("\nWrite the number you want to write at %p: ", (unsigned long int *)addr);
	fflush(stdout);
	scanf("%lx", &i);
	fflush(stdin);

	*(unsigned long int *)addr = i;
}


int main(int argc, char **argv)
{	
	printf("Welcome to write_anywhere!\n");
	printf("Before entering write_anywhere function!\n");
	fflush(stdout);

	write_anywhere();
	printf("\nDone with write_anywhere function!");
	printf("\n");
	fflush(stdout);

	return 0;
}
