#include <stdio.h>
#include <stdlib.h>

void get_flag()
{
	printf("There you go!\n");
	fflush(stdout);

	system("/bin/cat flag.txt");
}

int main()
{
	void (*function_pointer)();
	printf("Enter any address you want to jump to: ");
	fflush(stdout);

	scanf("%s", (unsigned char *)&function_pointer);
	fflush(stdin);

	printf("\n\nJumping to code at %p!\n", function_pointer);
	fflush(stdout);

	function_pointer();

	return 0;
}
