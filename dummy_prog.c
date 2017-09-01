
#include <stdio.h>
#include <stdlib.h>

static __attribute__((constructor)) void 
dummy_prog_in(void)
{
	fprintf(stderr, "running %s\n", __func__);
}

static __attribute__((destructor)) void 
dummy_prog_out(void)
{
	fprintf(stderr, "running %s\n", __func__);
}

static void
dummy_prog_atexit(void)
{
	fprintf(stderr, "running %s\n", __func__);
}

int main(void)
{
	atexit(dummy_prog_atexit);
	fprintf(stderr, "running %s\n", __func__);
}
