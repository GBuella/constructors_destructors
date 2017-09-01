
#include <stdio.h>
#include <stdlib.h>

static void
dummy_lib_atexit(void)
{
	fprintf(stderr, "running %s\n", __func__);
}

static __attribute__((constructor)) void 
dummy_lib_in(void)
{
	atexit(dummy_lib_atexit);
	fprintf(stderr, "running %s\n", __func__);
}

static __attribute__((destructor)) void 
dummy_lib_out(void)
{
	fprintf(stderr, "running %s\n", __func__);
}
