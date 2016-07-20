#include "apue.h"
#include <errno.h>

int
main(int argc, char *argv[])
{
	fprintf(stderr, "EACCES: %s\n", strerror(EACCES));
	printf("test01\n");
	errno = ENOENT;
	printf("test02,%d\n",errno);
	perror(argv[0]);
	printf("test03\n");
	exit(0);
}
