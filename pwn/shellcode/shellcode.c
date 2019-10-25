#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void func()
{	
	/* The next 6 lines are not relevant to the challenge.
         * There are here to make sure privileges don't get dropped
         * when a shell is spawned */
        unsigned int gid, uid;
        gid = getegid();
        uid = geteuid();

	setresgid(gid, gid, gid);
        setresuid(uid, uid, uid);
	
	char buffer[100];
	printf("Address of buffer: %p\n", buffer);
	fflush(stdout);

	gets(buffer);
	fflush(stdin);
}

int main(int argc, char **argv)
{	
	printf("Welcome to shellcode!\n");
	fflush(stdout);

	func();
	return 0;
}
