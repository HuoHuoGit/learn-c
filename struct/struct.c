#include <stdio.h>

struct strua {
	int a;
	char b;
	char *s;
};

struct {
	int a;
	int b;
} strub;

int main(void)
{
	struct strua a;
	strub.a = 0;
	strub.b = 1;

	printf( "%ld\n", sizeof(struct strua));
	printf( "%ld\n", sizeof(int *));
	return 0;
}
