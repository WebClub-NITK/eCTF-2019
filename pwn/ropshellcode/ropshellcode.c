#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void func()
{
	char buffer[100];
        gets(buffer);
        fflush(stdin);
	
	puts(buffer);
}

int main(int argc, char **argv)
{	
	printf("Welcome to ropshellcode!\n");
	fflush(stdout);

        func();
        return 0;
}

