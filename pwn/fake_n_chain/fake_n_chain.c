#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

void get_flag(unsigned int key1, unsigned long int key2, unsigned long key3, 
		unsigned long key4, unsigned long key5, unsigned long key6, 
		unsigned long key7, unsigned long key8)
{
	/* Basic check */
	if(key1 == 0xfaceb00c && key2 == 0xc15c0d06f00dbaad && key3 == 0xc00100ff &&
			key7 == 0xd15ea53ddeadbeef && key8 == 0xb105f00d)
	{
		/* The next 6 lines are not relevant to the challenge.
         	 * There are here to make sure privileges don't get dropped
        	 * when a shell is spawned */
        	unsigned int gid, uid;
        	gid = getegid();
        	uid = geteuid();
	
       		setresgid(gid, gid, gid);
        	setresuid(uid, uid, uid);
		
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
	fflush(stdin);

	puts(buffer);
	fflush(stdout);
}

int main(int argc, char **argv)
{	
	printf("Welcome to fake_n_chain!\n");
	fflush(stdout);

	func();
	return 0;
}
