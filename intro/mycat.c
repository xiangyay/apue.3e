#include <stdio.h>		/* for convenience */
#include <stdlib.h>		/* for convenience */
#include <stddef.h>		/* for offsetof */
#include <string.h>		/* for convenience */
#include <unistd.h>		/* for convenience */

#define	BUFFSIZE	4096

int
main(void)
{
	int		n = 0;
	char	buf[BUFFSIZE];
	
	printf("mycat.c\n");
	fflush(stdout);	/* force to print on buffered machines */ 
	while ((n = read(STDIN_FILENO, buf, BUFFSIZE)) > 0)
	{
		printf("n = %d\n", n);
		fflush(stdout); /* force to print on buffered machines */ 
		if (write(STDOUT_FILENO, buf, n) != n)
			printf("write error");
	}

	if (n < 0)
		printf("read error");

	return 0;
}
