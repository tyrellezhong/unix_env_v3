#include "../include/apue.h"

int
main(int argc, char *argv[])
{
	int			i;
	char		**ptr;
	extern char	**environ;

	for (i = 0; i < argc; i++)		/* echo all command-line args */
		printf("argv[%d]: %s\n", i, argv[i]);

		/* and all env strings */
/* 	for (ptr = environ; *ptr != 0; ptr++)	
		printf("%s\n", *ptr); */

	exit(0);
}
