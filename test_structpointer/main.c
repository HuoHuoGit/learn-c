#include <stdio.h>
#include <stdlib.h>

struct str{
	int *a;
	int b;
};

int main(void)
{
	int * x;
	struct str *test;
	test = malloc(sizeof(struct str));

	*x = 1;

	//test->a = x;

	//printf("%d\n", *test->a);
/*
	if (test->a == NULL) {
		printf("test->a == NULL\n");
	}
*/
	return 0;
}
