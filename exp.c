#include <stdio.h>
#include <stdint.h>
extern void _exit (register int code);


_start()
{
	int retval;
	retval = my_main();
	_exit(retval);
}

char* data = "Hello";
int my_main(void)
{
	uint32_t  bAddr = (uint32_t)data;
	printf("%d", bAddr);
	return 0;
}

