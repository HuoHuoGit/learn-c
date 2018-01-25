#include <stdio.h>

#define offsetof(TYPE, MEMBER) ((unsigned long) &((TYPE *)0)->MEMBER)

struct str_test{
	int a;
	//double b;
	char c;
};

int main(void)
{
	struct str_test s;	


	printf("int\ta:%ld\n", offsetof(struct str_test, a));
	//printf("double\tb:%ld\n", offsetof(struct str_test, b));
	printf("char\tc:%ld\n", offsetof(struct str_test, c));
}
