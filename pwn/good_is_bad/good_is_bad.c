#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void func()
{	
	char buffer[100];
	
	printf("Enter something: ");
	fflush(stdout);

	read(0, buffer, 100);
	fflush(stdin);

	printf("Hint: Address of read() function is %p\n", *(unsigned long int *)(0x804a00c));
	printf("\nEnter anything: ");
	fflush(stdout);
	
	read(0, buffer, 500);
	fflush(stdin);

	puts(buffer);

	return;
}

int main(int argc, char **argv)
{	
	printf("Welcome to good_is_bad!\n");
	fflush(stdout);
	
	func();
	return 0;
}
