#include "apue.h"

int
main(void)
{
	int		c;

	printf("This is a demo for input/output with buffer\n");
	while ((c = getc(stdin)) != EOF)
		if (putc(c, stdout) == EOF)
			err_sys("output error");

	if (ferror(stdin))
		err_sys("input error");

	exit(0);
}
