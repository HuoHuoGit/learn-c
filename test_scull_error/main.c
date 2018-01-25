#include <stdio.h>
#include <stdlib.h>
#include <memory.h>

typedef struct {
	int * a;
	int b;
	char c;
} str;

int main(void)
{
	str *s;
	s = malloc(sizeof(str));
	int array[3] = {1, 2, 3};

	memset(s, 0, sizeof(str));

	s->a = array;
	s->b = 4;
	s->c = 0;
	
	printf("%d\n", s->a[2]);

	free(s);

	return 0;
}
