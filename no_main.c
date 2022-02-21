#include <stdio.h>

extern void _exit (register int code);

int my_main(void);
int _start()
{
	int retval;
	retval = my_main();
	_exit(retval);
}


int my_main(void)
{
	printf("Hello world");
	return 0;
}

